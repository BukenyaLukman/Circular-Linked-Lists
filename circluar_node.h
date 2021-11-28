#ifndef C_NODE
#define C_NODE

#include<iostream>


typedef std::string Elem;

class CNode {
    private:
        Elem elem;
        CNode* next;
    friend class CircleList;
};

#endif