#ifndef EQUATION_NODE_H
#define EQUATION_NODE_H

#include <vector>
#include <iostream>
#include <memory>

using namespace std;

class Equation_Node{
    public:

       // enum 
        enum TermType {NONE, ROUND_BRACKET, SUM, MULTIPLY, EXPONENT, LOG, SIN, COS, MATRIX, NEGATION, NUMBER, SYMBOL, IMAGINARY, EQUALS, MINUS, DIVIDE, PI, INFINITY};
       // enum OperatorType{NONE_, ADDITIVE_, PRODUCT_, TENARY_}; //EXPONENT treated as special case because it is represented X^Y or UNARY when exp[X,Y]
        Equation_Node();
        Equation_Node(TermType termType, string numerator, string denominator, string function, bool negation);
        Equation_Node(const Equation_Node &source); // 2 : copy constructor
        Equation_Node& operator=(const Equation_Node &source); // 3 : copy assignment operator
        Equation_Node(Equation_Node &&source); // 4 : move constructor
        Equation_Node& operator=(Equation_Node &&source); // 5 : move assignment operator      


        void setParent(Equation_Node* parent_){parent = parent_;};
        Equation_Node* getParent();
        void setChildren(std::vector<std::unique_ptr<Equation_Node>> children_){children = move(children_);};
       // std::vector<std::unique_ptr<Equation_Node>> const& getChildren() const{return children;};
        std::vector<std::unique_ptr<Equation_Node>> const& getChildren() const{return children;};
        std::vector<std::unique_ptr<Equation_Node>> moveChildren() {return move(children);};

        void setTermType(TermType termType_){termType = termType_;};
        TermType getTermType(){return termType;};   
        void setNumeratorValue(std::string  value_){numerator_value = value_;};
        string getNumeratorValue(){return numerator_value;}; 
        void setDenominatorValue(std::string  value_){denominator_value = value_;};
        string getDenominatoralue(){return denominator_value;}; 
        void setNegation(bool value_){negation = value_;};
        bool getNegation(){return negation;}; 
        void setFunctionString(std::string val){function_string = val;};
        string getFunctionString(){return function_string;};
        void addChild(unique_ptr<Equation_Node> child);
        
    private:
        //std::shared_ptr<Equation_Node> parent;
        Equation_Node* parent;
        std::vector<std::unique_ptr<Equation_Node>> children;
        TermType termType;
        std::string numerator_value;
        std::string denominator_value;
        std::string function_string;
        bool negation;


};


#endif