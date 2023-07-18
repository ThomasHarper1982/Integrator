#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>
#include <ctype.h>
#include "equation_node.h"
#include <map>
#include <string>
#include <string_view>


using namespace std;
#include <string.h>
class Equation{

    public:

        enum ParseType{INVALID, INCOMPLETE, VALID};
        enum OperationType{NONE,SIMPLIFY, SOLVE, INTEGRATE};
        Equation();
        Equation(const Equation &source); // 2 : copy constructor
        Equation& operator=(const Equation &source); // 3 : copy assignment operator
        Equation(Equation &&source); // 4 : move constructor
        Equation& operator=(Equation &&source); // 5 : move assignment operator       

       ~Equation(){};
       string getUserEquation(){return userEquation;}
       string getLowerBound(){return lowerBound;}
       string getUpperBound(){return upperBound;}
       string getVariable(){return variable;}
       OperationType getOperation(){return operation;};
       //Equation_Node::TermType Equation::identifyTerm(std::string candidate);
       bool validateTerm(string candidate,  Equation_Node::TermType& termType);
       bool identifyFunction(string term, Equation_Node::TermType& termType, bool matches);        
       void parseEquationNodeDepthFirst(string function, Equation_Node equationNode);
       void setUserEquation(string userEquation_){userEquation = userEquation_;}
       void setLowerBound(string lowerBound_){lowerBound = lowerBound_;}
       void setUpperBound(string upperBound_){upperBound = upperBound_;}
       void setVariable(string variable_){variable = variable_;}

       void parseEquationNodeDepthFirst2(string function, unique_ptr<Equation_Node> equationNode);
       vector<Equation_Node>* getAdditiveTerms(string function);
       unique_ptr<Equation_Node>  getTerm(string function, Equation_Node::TermType termType);
       unique_ptr<Equation_Node>  getUnaryTerm(string function);
       unique_ptr<Equation_Node>  getTernaryTerm(string function);
       unique_ptr<Equation_Node>  getExponentTerm(string function);

       std::vector<string> symbols =  {"a","b","c","d","e","f","g","h","i","j","l","m","n","o",
                                    "p","q","r","s","t","u","v","w","x","y","z", 
                                    "pi", "cos[", "sin[", "exp[", "*", "+", "-" , "/", "=", "^", "_", "(", ")"};

       map<string, Equation_Node::TermType> symbolsDict;// =  {pair<string, Equation_Node::OperatorType>("a", Equation_Node::OperatorType::SYMBOL)};

       bool checkOperator(char next_char);

       static OperationType checkOperation(string str){
            if (str == "simplify"){
                return OperationType::SIMPLIFY;
            }else if (str == "solve"){
                return OperationType::SOLVE;         
            }else if (str == "integrate"){
                return OperationType::INTEGRATE;    
            }

            return OperationType::NONE;
       }
       void setOperation(string operation_str){

            OperationType operation_ = Equation::checkOperation(operation_str);
            operation = operation_;
       }
       void parseEquationTree();

    private:

        OperationType operation;         
        string userEquation;

        unique_ptr<Equation_Node> LHS; //default
        unique_ptr<Equation_Node> RHS; // if equals applied, then build RHS independently       

        //required for integration
        string lowerBound;
        string upperBound;
        string variable;
        enum parseState{DIGIT, SYMBOL, LRBRACKET, RRBRACKET, LSBRACKET, RSBRACKET, PLUS, MINUS, MULTIPLY, DIVIDE, EXPONENT};
       
};

#endif