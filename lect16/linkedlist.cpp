//linkedlist.cpp
#include <iostream>
#include <vector>
#include "linkedlist.h"
using namespace std;

Node* push_front(Node *h, string value){
    Node *p = new Node {value, nullptr};
    if (h != nullptr){  
        p->next = h;
    }
    return p;
}

int main(int argc, char const *argv[])
{
    vector<string> TAs = {"Alex", "Gautam", "Vino", "Martin"};
    TAs.push_back("Gretchan");
    Node *head = nullptr; // Empty linked list
    head = push_front(head, TAs[0]);
    head = push_front(head, TAs[1]);

    // for(auto elem: TAs){
    //     head = push_front(head, elem);
    // }
    return 0;
}
