#ifndef WORKSPACE_H
#define WORKSPACE_H


#include <vector>
#include "equation.h"

class Workspace{
    private:
        std::vector<Equation*> m_Items;
    public:
        std::vector<Equation*> getEquations(){return m_Items;};
        void setEquations(std::vector<Equation*> m_Items_){m_Items = m_Items_;};
        static Workspace& getInstance(){
            static Workspace instance; 
            return instance;}
        Workspace(){};
        ~Workspace(){};


};


#endif
