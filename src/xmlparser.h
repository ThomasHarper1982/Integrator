#ifndef XMLPARSER_H
#define XMLPARSER_H


#include <iostream>
#include <rapidxml/rapidxml.hpp>
#include <rapidxml/rapidxml_utils.hpp>

#include "workspace.h"

using namespace std;

class XMLParser
{
private:
    /* data */
public:
  /*  XMLParser();
    ~XMLParser();*/
     static void parseEquationFile(string filename, Workspace workspace);
};

#endif




