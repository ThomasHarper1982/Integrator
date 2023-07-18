#include "equation.h"
Equation::Equation(){
         /*   string variable = "abcdefghjklmnopqrstuvwxyz";
            for (int i = 0; i< variable.size(); i++){
                symbolsDict[(variable[i]+"")] =  Equation_Node::TermType::SYMBOL; 
            }

            symbolsDict[("i")] =  Equation_Node::TermType::IMAGINARY;

            symbolsDict[("cos[")]  =  Equation_Node::TermType::COS;

            symbolsDict[("sin[")]  =  Equation_Node::TermType::SIN;

            symbolsDict["mat["] =  Equation_Node::TermType::MATRIX;

            symbolsDict["exp["] =  Equation_Node::TermType::EXPONENT;


            symbolsDict["+"] =  Equation_Node::TermType::SUM;
           
            symbolsDict["*"] =  Equation_Node::TermType::MULTIPLY;

            symbolsDict["-"] =  Equation_Node::TermType::MINUS;

            symbolsDict["/"] =  Equation_Node::TermType::DIVIDE;

            symbolsDict["^"] =  Equation_Node::TermType::EXPONENT;

            symbolsDict["("] =  Equation_Node::TermType::ROUND_BRACKET;

            symbolsDict["PI"] =  Equation_Node::TermType::PI;

            symbolsDict["="] =  Equation_Node::TermType::EQUALS;

            
            */

}

Equation::Equation(const Equation &source){} // 2 : copy constructor
Equation& Equation::operator=(const Equation &source){    
    std::cout << "Copy assignment "<< this << std::endl;
    if (this == &source)
      return *this;
    return *this;
} // 3 : copy assignment operator

Equation::Equation(Equation &&source){

} // 4 : move constructor

Equation& Equation::operator=(Equation &&source){
    if (this == &source)
      return *this;
    return *this;
} // 5 : move assignment operator  


void Equation::parseEquationTree(){
    //userEquation
    std::string::size_type i = 0; 
    string term = "";
    /*
     (-b + (b^2 - 4*a*c))^(1/2))/2*a*c
    */
   int bracketCount = 0;
    while (i < userEquation.size()){
        char x = userEquation[i];
         if (i+1< userEquation.size()){
            char xn = userEquation[i];
         }
        if (x == '(')

        i++;
    }
}


//bool Equation::


/*
void Equation::parseEquationNodeDepthFirst(string function, Equation_Node equationNode){

    //identify "branch" function or "leaf" term
    std::string::size_type i = 0; 
    while (i < userEquation.size()){
        std::string::size_type j = i; 

        //if the string is "cos[...",  then check 
        //"c" -> maybe
        //"co" -> maybe
        //"cos" -> maybe
        //"cos[" -> yes -> valid 

        //if the string is "cox", 
        //"c" -> maybe
        //"co" -> maybe
        //"cox" -> no -> invalid

        //if the string is "c*", 
        //"c" -> maybe
        //"c*" -> yes -> valid
        string term = "";
        string previous_term = "";
        Equation_Node::TermType termType;
        while (j < userEquation.size()){
            term = userEquation.substr(i, j);
            //check candidate is valid
            bool valid = validateTerm(term, termType);
            
            if (valid){
                
            }else{
                return;
                // throw exception -> leave method with error
            }
            //terminating condition: 
            //(a) end of equation
            //(b) next char is an operator + / - 
            //(c) current term is valid 
            bool nextCharOperator = false;
            if (j+1 < userEquation.size()){
                char next_char= userEquation[j+1];    
                nextCharOperator = checkOperator(next_char);       
            }
            
            if (valid && (j == userEquation.size() || nextCharOperator)){
                break;
            }
            previous_term = term;
            j++;
        } 
        //check if term is function (single-branch) or value (leaf) or operator (multi-branch)
        i = j+1;
    }
}*/


//we just want to verify functions are of the form:
// A + B + C
// or +A + B + C 
// where .... A could be E.G (a+b) or F[a+b]
// we are not validating terms! A,B,C do not need to be valid
//returns A, B, C as strings

/*
vector<Equation_Node>* Equation::getAdditiveTerms(string function){

    vector<Equation_Node>* additiveTerms = NULL;
    std::string::size_type i = 0; 
    bool inverse_mode = false;
    while (i < userEquation.size()){
        std::string::size_type j = i;
        string term = "";
        string previous_term = "";
        Equation_Node node;
     //   Equation_Node::TermType termType;
        while (j < userEquation.size()){
            //simply ignore or +- within brackets [], ()
            term = userEquation.substr(i, j);
            //termination condition "=-"
            char x = userEquation[i];
            if (x == '('){
                int bracket_count = 1;
                std::string::size_type k = j;
                while (bracket_count!=0){
                    k++;
                    char y = userEquation[i];   
                    if (y == '('){
                        bracket_count++;
                    } else if (y == ')'){
                        bracket_count--;
                    }
                }
                j = k +1;
            }
            else if (x == '['){
                int bracket_count = 1;
                std::string::size_type k = j;
                while (bracket_count!=0){
                    k++;
                    char y = userEquation[i];   
                    if (y == '['){
                        bracket_count++;
                    } else if (y == ']'){
                        bracket_count--;
                    }
                }
                j = k +1;
            }
            else if (x == ')'){
                //throw bracket mismatch error
            }
            else if (x == ']'){
                //throw bracket mismatch  error
            }
            else if (x=='+' || x=='-'){
                
                if (inverse_mode){
                    node.setNegation(false);
                }

               // node.setNegation(false);
                if (x=='-'){
                    inverse_mode = true;
                }else{
                    inverse_mode = false;
                }
                //""..+" causes error
                if (j==userEquation.size()-1){
                    //throw missing operand error
                }

                break;
            }
        }
        additiveTerms->emplace_back(node);
    }
    return additiveTerms;
}
*/

//we just want to verify functions are of the form:
// A + B + C
// or +A + B + C 
// where .... A could be E.G (a+b) or F[a+b]
// we are not validating terms! A,B,C do not need to be valid
//returns A, B, C as strings


unique_ptr<Equation_Node> Equation::getTerm(string function, Equation_Node::TermType termType ){


    char operation;
    char inverse_operation;
    if (termType == Equation_Node::TermType::SUM){
        operation = '+';
        inverse_operation = '-';
    } else if (termType == Equation_Node::TermType::MULTIPLY){
        operation = '*';
        inverse_operation = '/';     
    } /*else if (operatorType == Equation_Node::OperatorType::EXPONENT){ //the symbol "^" not the unary operator "EXP"
        operation = '^';
        //inverse_operation = '';  
    }*/

    //its okay if method returns NULL, top_term won't be used and will disappear!
    Equation_Node top_term ;
    top_term = Equation_Node();
    if (termType == Equation_Node::TermType::SUM){
    top_term.setTermType(Equation_Node::TermType::SUM);
    }else if (termType == Equation_Node::TermType::MULTIPLY){
    top_term.setTermType(Equation_Node::TermType::MULTIPLY);
    }


    vector<unique_ptr<Equation_Node>> terms;

    std::string::size_type i = 0; 
    bool inverse_mode = false;
    //bool exponent_mode = false;
    while (i < userEquation.size()){
        std::string::size_type j = i;
        std::string term = "";
        std::string previous_term = "";
        Equation_Node node = Equation_Node();
      
        //loop to collect each term
        while (j < userEquation.size()){
            //simply ignore or +- within brackets [], ()
            term = userEquation.substr(i, j);
            //termination condition "=-"
            char x = userEquation[j];
            if (x == '('){
                int bracket_count = 1;
                std::string::size_type k = j;
                while (bracket_count!=0){
                    k++;
                    char y = userEquation[i];   
                    if (y == '('){
                        bracket_count++;
                    } else if (y == ')'){
                        bracket_count--;
                    }
                }
                j = k +1;
            }
            else if (x == '['){
                int bracket_count = 1;
                std::string::size_type k = j;
                while (bracket_count!=0){
                    k++;
                    char y = userEquation[i];   
                    if (y == '['){
                        bracket_count++;
                    } else if (y == ']'){
                        bracket_count--;
                    }
                }
                j = k +1;
            }
            else if (x == ')'){
                //throw bracket mismatch error
            }
            else if (x == ']'){
                //throw bracket mismatch  error
            }
            else if (x==operation || x==inverse_operation){
                
                if (termType == Equation_Node::TermType::SUM){
                    if (inverse_mode){ //inverse mode applies to previous term A: E.G  -A @+ B
                        node.setNegation(true);
                    }else{
                        node.setNegation(false);
                    }
                    node.setNumeratorValue(term);
                    node.setDenominatorValue("1");
                    if (x=='-'){
                        inverse_mode = true;
                        
                    }else if (x== '+'){
                        inverse_mode = false;
                    }

                }
                else if (termType == Equation_Node::TermType::MULTIPLY){
                    if (inverse_mode){
                        node.setNumeratorValue("1");
                        node.setDenominatorValue(term);
                    }else{
                        node.setNumeratorValue(term);
                    }

                    if (x=='/' && previous_term != ""){
                        inverse_mode = true;
                       // node.setFunctionString(term);
                    }else if (x=='/' && previous_term == ""){ // /A causes error -> no numerator
                        //error - missing numerator
                    }
                    else if (x=='*'&& previous_term != ""){
                        inverse_mode = false;
                    }else if (x=='*' && previous_term == ""){
                        //error - missing factor
                    }
                    
                }
              /*  else if (operatorType == Equation_Node::OperatorType::EXPONENT){

                    if (x=='^' && previous_term != ""){
                        


                    }else if (x=='^' && previous_term == ""){ // /A causes error -> no base
                        //error - missing base
                    }
                    node.setFunctionString(term);
                }*/

                previous_term = term;
                //""..+" causes error
                if (j==userEquation.size()-1){
                    //throw missing operand error
                }

                break;
            }
            j++;

        }
        if (j==userEquation.size()-1){
            if (termType == Equation_Node::TermType::SUM){
                if (inverse_mode){ //inverse mode applies to previous term A: E.G  -A @+ B
                    node.setNegation(true);
                }else{
                    node.setNegation(false);
                }
                node.setNumeratorValue(term);
                node.setDenominatorValue("1");
            }else if (termType == Equation_Node::TermType::MULTIPLY){
                    if (inverse_mode){
                        node.setNumeratorValue("1");
                        node.setDenominatorValue(term);
                    }else{
                        node.setNumeratorValue(term);
                        node.setDenominatorValue("1");
                    }
            }

        }  
        i = j;
        node.setParent(&top_term);
        terms.emplace_back(move(make_unique<Equation_Node>(node)));
    }
    
    if (terms.size()!=0){

       top_term.setChildren(move(terms));   
        return make_unique<Equation_Node>(top_term);
    }
    return NULL;

}


//exponent case
// A ^ B ^ C ^ D== ((A ^ B) ^ C) ^ D .......
//returns Equation_Node at top of tree
unique_ptr<Equation_Node>  Equation::getExponentTerm(string function){
   std::string::size_type i = 0; 
    bool inverse_mode = false;
    //bool exponent_mode = false;
    unique_ptr<Equation_Node>  node = NULL;
    unique_ptr<Equation_Node> left_node;
    unique_ptr<Equation_Node> right_node;
     while (i < userEquation.size()){
        std::string::size_type j = i;
        std::string term = "";
        std::string previous_term = "";

        while (j < userEquation.size()){
            //simply ignore or +- within brackets [], ()
            term = userEquation.substr(i, j);
            //termination condition "=-"
            char x = userEquation[j];
            if (x == '('){
                int bracket_count = 1;
                std::string::size_type k = j;
                while (bracket_count!=0){
                    k++;
                    char y = userEquation[i];   
                    if (y == '('){
                        bracket_count++;
                    } else if (y == ')'){
                        bracket_count--;
                    }
                }
                j = k +1;
            }
            else if (x == '['){
                int bracket_count = 1;
                std::string::size_type k = j;
                while (bracket_count!=0){
                    k++;
                    char y = userEquation[i];   
                    if (y == '['){
                        bracket_count++;
                    } else if (y == ']'){
                        bracket_count--;
                    }
                }
                j = k +1;
            }
            else if (x == ')'){
                //throw bracket mismatch error
            }
            else if (x == ']'){
                //throw bracket mismatch  error
            }
            else if (x == '^'){
                if (j == userEquation.size()-1){
                    //throw missing exponent exception
                }

                if (node == NULL){ //the first time, set the left node
                    Equation_Node node_ = Equation_Node();
                    node_.setTermType(Equation_Node::TermType::EXPONENT);
                   // node = move(make_unique<Equation_Node>(node_));
                    Equation_Node left_node_ =  Equation_Node();
                    left_node_.setFunctionString(term);
                    left_node_.setParent(&node_);//TODO test
                   // left_node= move(make_unique<Equation_Node>(left_node_));
                    left_node =make_unique<Equation_Node>(left_node_);
                    vector<unique_ptr<Equation_Node>> children;
                    children.emplace_back(move(left_node));
                    node_.setChildren(move(children));
                    node = move(make_unique<Equation_Node>(node_));

                }else{

                    Equation_Node right_node_ = Equation_Node();
                    right_node_.setFunctionString(term);
                    right_node= move(make_unique<Equation_Node>(right_node_));
                    Equation_Node node_ = *node.get();
                    node_.addChild(move(right_node));
                    right_node_.setParent(&node_);
                    left_node = move(node);

                    node_ = Equation_Node();
                    node_.setTermType(Equation_Node::TermType::EXPONENT);
                    node_.addChild(move(left_node));
                    Equation_Node left_node_ = *left_node.get();
                    left_node_.setParent(&node_);
                    node = move(make_unique<Equation_Node>(node_));

                }         
            }
            j++;
        }
        if (j == userEquation.size()-1){
                if (node != NULL){

                    Equation_Node right_node_ = Equation_Node();
                    right_node_.setFunctionString(term);
                    right_node= move(make_unique<Equation_Node>(right_node_));
                    Equation_Node node_ = *node.get();
                    node_.addChild(move(right_node));
                    right_node_.setParent(&node_);
                }   
        }
        i = j;;
    }

   // return make_unique<Equation_Node>(node);
    return NULL;
}


unique_ptr<Equation_Node>  Equation::getUnaryTerm(string function){
 

    return NULL;
}


/*
functions of the form F[x0,x1,x2,...xn]   1<=i<=n


iterate string, if substring matches function from 0,..,j, then collect terms in brackets j+1 to size()-1

top_term == function

*/


unique_ptr<Equation_Node> Equation::getTernaryTerm(string function){


    Equation_Node top_term ;
    top_term = Equation_Node();


    vector<unique_ptr<Equation_Node>> terms;
    std::string::size_type i = 0; 
    //bool exponent_mode = false;
    std::string term = "";
    std::string previous_term = "";
    Equation_Node::TermType termType;
    bool valid = false;              
    while (i < userEquation.size()){
        term = userEquation.substr(0, i);
        valid = identifyFunction(term, termType,  false); //check if termType is contained

        previous_term = term;
        if (!valid){
            break;
        }
        i++;
    }
    valid = identifyFunction(previous_term, termType,  true); //check if termType is matched
    if (!valid){ 
        return NULL;
    }else{//valid
        //iterate over string j to N
        //if termType is roundBracket, then final term should be ")", else "]"
        //check for any comma to delimit terms, between comma's skip over [] {} brackets until next comma
        //make each term in Equation_Node with parent of top_term etc
        while (i < userEquation.size()){
            

        }

    }


    return NULL;
}


void Equation::parseEquationNodeDepthFirst2(string function, unique_ptr<Equation_Node>  equationNode){


    std::string::size_type i = 0; 

        //get all the additive terms
        unique_ptr<Equation_Node> term = Equation::getTerm(function, Equation_Node::TermType::SUM);

      //  unique_ptr<Equation_Node> productTerm ;
        //if no additive terms, then get the product terms
        if (term==NULL){
            term = Equation::getTerm(function, Equation_Node::TermType::MULTIPLY);
        }

      //  unique_ptr<Equation_Node> exponentTerm = NULL;

        if (term == NULL){ //collect terms A,B,C,... of the form A^B^C...^Z
            term = Equation::getExponentTerm(function);
        }   
     
      //  unique_ptr<Equation_Node>  ternaryTerm = NULL;

        if (term == NULL){
           term = Equation::getTernaryTerm(function);
        }  

      /*  for (const auto& iter : term->getChildren())
        {

        }
*/



        //else if unary operator f(...) operator

        //else -> value?

    


}








bool checkOperator(char next_char){





    return false;
}


bool Equation::identifyFunction(string term, Equation_Node::TermType& termType, bool matches){
    std::vector<string> symbols =  {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o",
                                    "p","q","r","s","t","u","v","w","x","y","z", 
                                    "mat[", "pi", "cos[", "sin[", "exp[", "*", "+", "-" , "/", "=", "^", "_", "(", ")"};

    map<string, Equation_Node::TermType>::iterator iter = symbolsDict.begin();
    // run for loop from 0 to vecSize
    bool valid_symbols = false;
    for (iter; iter != symbolsDict.end(); iter++)
    {

        string x = iter->first; 
        if (!matches){
            if (term.find(x)){
                
                valid_symbols =  true;
                termType = iter->second;
            }else{
                valid_symbols =  false;
                break;
            }
        }else{
            if (term.compare(x)==0){
                
                valid_symbols =  true;
                termType = iter->second;
            }else{
                valid_symbols =  false;
                break;
            }
        }
    }


   return valid_symbols;
}


bool Equation::validateTerm(string term, Equation_Node::TermType& termType){
   
    //Vector = new Vector(){}
    std::vector<string> symbols =  {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o",
                                    "p","q","r","s","t","u","v","w","x","y","z", 
                                    "mat[", "pi", "cos[", "sin[", "exp[", "*", "+", "-" , "/", "=", "^", "_", "(", ")"};
    int dot_count = 0;
    bool valid_number = false;
    for (int i = 0; i < term.size(); i++){
        char x = term[i];
        
        if (x == '.'){
            dot_count ++;
             if (dot_count > 1){
                valid_number = false;
                break;
             }
        }
        else if (isdigit(x)){
            termType = Equation_Node::TermType::NUMBER;
            valid_number = true;
        }else{
            valid_number = false;
            break;
        }        
    }
    map<string, Equation_Node::TermType>::iterator iter = symbolsDict.begin();
    // run for loop from 0 to vecSize
    bool valid_symbols = false;
    for (iter; iter != symbolsDict.end(); iter++)
    {

        string x = iter->first; 
        if (term.find(x)){
            
            valid_symbols =  true;
            termType = iter->second;
        }else{
            valid_symbols =  false;
            break;
        }
    }


   return (valid_symbols || valid_number);

}
/*
Equation_Node::TermType Equation::identifyTerm(string candidate){
    Equation_Node::TermType termType = Equation_Node::TermType ::NONE;

    return termType;
}
*/
