#ifndef CIRCLE_LIST
#define CIRCEL_LIST
#include "circluar_node.h"

class CircleList {
    public:
        CircleList();
        ~CircleList();
        bool empty() const;
        const Elem& front() const;
        const Elem& back() const;
        void advance();
        void add(const Elem& e);
        void remove();
        void traverse();
        void listReverse();
    private:
        CNode* cursor;
};

#endif