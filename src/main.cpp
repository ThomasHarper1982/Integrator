#include <iostream>
#include <rapidxml/rapidxml.hpp>
#include <rapidxml/rapidxml_utils.hpp>

#include "workspace.h"
#include "xmlparser.h"

using namespace std;

string getEXE(char *argv[]){
  string x = argv[0];

  auto pos = x.rfind('/');
  if (pos != std::string::npos) {
      x.erase(pos);
  }

  return x;
}

int main(int argc, char *argv[])
{
  try {
    namespace rx = rapidxml;
    std::cout << argv[0] << "\n";
    std::cout << argv[1] << "\n";
    // Read graph properties manually:

    string exe_folder = getEXE(argv) + "/../" + string (argv[1]) ;

    //std::cout << exe_folder;
    //rx::file<> file(exe_folder.c_str()); // (default template is char)
    //rx::xml_document<> doc;
    //doc.parse<0>(file.data());

    Workspace workspace = Workspace::getInstance();
    XMLParser::parseEquationFile(exe_folder, workspace);



    /*rx::xml_node<> *n_graphml = doc.first_node("graphml"); // root tag of the document
    if (n_graphml) {
      for (rx::xml_node<> *n = n_graphml->first_node("key"); n; n = n->next_sibling("key")) {
        rx::xml_attribute<> *intent = n->first_attribute("for");
        if (!intent || !intent->value()) {
          continue;
        }
        // Get an attribute from <key> tag:
        rx::xml_attribute<> *id = n->first_attribute("id"); 

        // If everything is valid, try to extract the data:
        string data;
        //getData(n->first_node("default"), data, false);
        // ...
      }
    }*/
  } catch (exception &e) {
    cerr << e.what() << endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}



