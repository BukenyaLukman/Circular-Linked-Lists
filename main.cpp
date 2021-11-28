#include<iostream>
#include "circle_list.h"



CircleList::CircleList()
: cursor(NULL) { }
CircleList::~CircleList()
{ 
    while (!empty()) remove(); 
}


bool CircleList::empty() const { return cursor == NULL; }
const Elem& CircleList::back() const { return cursor->elem; }
const Elem& CircleList::front() const { return cursor->next->elem; }
void CircleList::advance() { cursor = cursor->next; }

void CircleList::add(const Elem& e) {
    CNode* v = new CNode;
        v->elem = e;
    if (cursor == NULL) {
        v->next = v;
        cursor = v;
    }
    else {
        v->next = cursor->next;
        cursor->next = v;
    }
}

void CircleList::remove() {
    CNode* old = cursor->next;
    if (old == cursor)
        cursor = NULL;
    else
        cursor->next = old->next;
        delete old;
}

// void listReverse(CircleList& L) {
//     CircleList T;
//     while (!L.empty()) {
//         std::string s = L.front(); 
//         L.removeFront();
//         T.addFront(s);
//     }
//     while (!T.empty()) {
//         std::string s = T.front(); 
//         T.removeFront();
//         L.addBack(s);
//     }
// }

// void traverse(CNode* last)
// {
//     CNode *p;
 
//     // If list is empty, return.
//     if (last == NULL)
//     {
//         std::cout << "List is empty." << std::endl;
//         return;
//     }
 
    
//     p = last->next;
 
//     // Traversing the list.
//     do
//     {
//         std::cout << p -> elem << " ";
//         p = p -> next;
 
//     }
//     while(p != last->next);
 
// }

int main(){

    CircleList playList;
    playList.add("Stayin Alive");
    playList.add("Le Freak");
    playList.add("Jive Talkin");
    playList.advance();
    playList.advance();
    playList.remove();
    playList.add("Disco Inferno");

    return 0;
}