#include "xmlparser.h"

using namespace std;

/*
XMLParser::XMLParser()
{
}

XMLParser::~XMLParser()
{
}*/

void XMLParser::parseEquationFile(string filename_str, Workspace workspace){

    namespace rx = rapidxml;

    rx::file<> file(filename_str.c_str()); // (default template is char)

    rx::xml_document<> doc;
    doc.parse<0>(file.data());
    rx::xml_node<> *n_workspace = doc.first_node("workspace"); // root tag of the document

    for (rx::xml_node<> *n_equation = n_workspace->first_node("equation"); n_equation; n_equation = n_equation->next_sibling("equation")){
        rx::xml_node<> *n_operation = n_equation->first_node("operation");
        rx::xml_node<> *n_equation_string = n_equation->first_node("equation_string");
        rx::xml_node<> *n_lower = n_equation->first_node("lower_bound");
        rx::xml_node<> *n_upper = n_equation->first_node("upper_bound");
        rx::xml_node<> *n_variable = n_equation->first_node("variable");
        try{//validation needed
            string operation = n_operation->value();
            string equation_str = n_equation_string->value();
            string lower_str = n_lower->value();
            string upper_str = n_upper->value();
            string variable = n_variable->value();
           
            //check input is good! or accept input as is and reject equation if it doesnt parse into 

            Equation* eq = new Equation();
            eq->setUserEquation(equation_str);
            eq->setOperation(operation);
            eq->setLowerBound(lower_str);
            eq->setUpperBound(upper_str);
            eq->setVariable(variable);

           std::vector<Equation*> equations = Workspace::getInstance().getEquations();

            //determine equation_node tree
            

           //equations.emplace_back(eq);
           equations.push_back(eq);


     //s   eq->setLowerBound();zzs
        }catch(exception e){

        }
    }

}
