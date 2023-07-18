#include "equation.h"
#include <queue>
#include <stack>

    Equation_Node::Equation_Node(){
    }

    Equation_Node::Equation_Node(Equation_Node::TermType termType, string numerator, string denominator, string function, bool negation){
        //children = vector<unique_ptr<Equation_Node>>();
        this->termType = termType;
        this->numerator_value = numerator_value;
        this->denominator_value = denominator_value;
        this->function_string = function_string;
        this->negation = negation;
    }

    Equation_Node::Equation_Node(const Equation_Node &source){

        *this = Equation_Node( source.termType,  source.numerator_value, source.denominator_value, source.function_string,  source.negation);

        //auto& children = source.getChildren();
        vector<unique_ptr<Equation_Node>> children_copy;
        for (const auto& iter : source.getChildren())
        {
            Equation_Node child =  Equation_Node(*iter);
            child.setParent(this); 
            unique_ptr<Equation_Node> node = make_unique<Equation_Node>(child);
            children_copy.emplace_back(move(node));
        }

        this->setChildren(move(children_copy));
    }

  /**  Equation_Node::Equation_Node(const Equation_Node &source){
      //  std::vector<Equation_Node> children;

        //copy each node
       stack<Equation_Node> node_stack;
        node_stack.push(source);

        *this = Equation_Node(source.termType, source.numerator_value, source.denominator_value, source.function_string, source.negation);

        Equation_Node parent = Equation_Node(source.termType, source.numerator_value, source.denominator_value, source.function_string, source.negation);

        while (!node_stack.empty()){
            Equation_Node x = node_stack.top();
            vector<unique_ptr<Equation_Node>> children = x.getChildren();
            vector<unique_ptr<Equation_Node>>::iterator iter = children.begin();
            node_stack.pop();
            
            for (iter; iter != children.end(); iter++)
            {
                Equation_Node y = *iter->get();
                node_stack.push(y);

                Equation_Node child = Equation_Node(y.termType, y.numerator_value, y.denominator_value, y.function_string, y.negation);
                unique_ptr<Equation_Node> child_unique = std::make_unique<Equation_Node>(child);
                parent.getChildren().emplace_back(child);

               // x.getChildren().emplace_back();
            }
        }
    }**/
/**
   void copyInOrder(TNode *orgTree, Tnode *& copyTree){
    if(orgTree !=NULL){
        //left side
        TNode newLeftNode = cloneNode(orgTree->left_link);
        copyTree->left_link = newLeftNode;
        copyInOrder(orgTree->left_link, copyTree->left_link);

        //right side
        TNode newRightNode = cloneNode(orgTree->right_link);
        copyTree->right_link = newRightNode;
        copyInOrder(orgTree->right_link, copyTree->right_link);
    }
}
 
 */

/**
        stack = [self.entities]
        push = stack.append
        pop = stack.pop
        while stack: 
            for e in pop():
                yield e
                if e.entities:
                    push(e.entities)
        */
    //    std::queue<Equation_Node> treesQueue;
   /* for (const auto& tree : trees) {
        treesQueue.push(&tree);
        while (!treesQueue.empty()) {
            const auto& current = *treesQueue.front();
            treesQueue.pop();
            for (int i = 0; i != current.root->childCount; ++i) {
                const auto& child = current.root->children[i];
                if (child.root->data == name)
                    return current.root->data;
                treesQueue.push(&child);
            }
        }
    }*/




     // 2 : copy constructor
    Equation_Node& Equation_Node::operator=(const Equation_Node &source){
       std::cout << "Copy assignment "<< this << std::endl;

        vector<unique_ptr<Equation_Node>> children_copy;
        for (const auto& iter : source.getChildren())
        {
            Equation_Node child =  Equation_Node(*iter);
            child.setParent(this); 
            unique_ptr<Equation_Node> node = make_unique<Equation_Node>(child);
            children_copy.emplace_back(move(node));
        }

        this->setChildren(move(children_copy));


        if (this == &source)
            return *this;
        return *this;
    } // 3 : copy assignment operator


    Equation_Node::Equation_Node(Equation_Node &&source){
        vector<unique_ptr<Equation_Node>> children_copy;
        for (const auto& iter : source.getChildren())
        {
            Equation_Node child =  Equation_Node(*iter);
            child.setParent(this); 
            unique_ptr<Equation_Node> node = make_unique<Equation_Node>(child);
            children_copy.emplace_back(move(node));
        }

        this->setChildren(move(children_copy));

    } // 4 : move constructor
    Equation_Node& Equation_Node::operator=(Equation_Node &&source){

        this->termType = source.termType;
        this->numerator_value = source.numerator_value;
        this->denominator_value = source.denominator_value;
        this->function_string = source.function_string;
        this->negation = source.negation;

        vector<unique_ptr<Equation_Node>> children = source.moveChildren(); 
        
        this->setChildren(move(children));

        if (this == &source)
            return *this;
        return *this;
    } // 5 : move assignment operator    


    void Equation_Node::addChild(unique_ptr<Equation_Node> child){
        children.emplace_back(move(child));
    }

    /*
    void inorder(Node *node)
{
    if (node == NULL)
        return;
 
    // Total children count
    int total = node->length;
     
    // All the children except the last
    for (int i = 0; i < total - 1; i++)
        inorder(node->children[i]);
 
    // Print the current node's data
    cout<< node->data << " ";
 
    // Last child
    inorder(node->children[total - 1]);
}
 
    */