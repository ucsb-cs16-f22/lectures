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
void print(Node *h){
    Node *p = h;
    while(p){
        cout << p->data <<" "; //process the node
        p = p->next;
    }
    cout << endl;
}

bool find(Node *h, string value){
    Node *p = h;
    while(p){
        if(p->data == value){
            return true;
        }
        p = p->next;
    }
    return false;
}

void clear(Node *&h){
    // Delete all the nodes
   // delete h;  //delete the first node which is wrong
    Node *p = h;
    Node *q;
    while(p){
        q = p->next;
        delete p; // 
        p = q;
    }
    h = nullptr;    
}

int main(int argc, char const *argv[])
{
    vector<string> TAs = {"Alex", "Gautam", "Vino", "Martin"};
    
    TAs.push_back("Gretchan");
    Node *head = nullptr; // Empty linked list

    print(head);

    for(auto elem: TAs){
        head = push_front(head, elem);
        print(head);
    }
    cout << "Is Vino in list? "<< std::boolalpha << find(head,"Vino") <<endl;
    cout << "Is Diba in list? "<< std::boolalpha << find(head,"Diba") <<endl;
    cout << "Clear all nodes"<< endl;
    clear(head);
    cout << "Print nodes after clear" <<endl;
    print(head);
    head = push_front(head, "Diba");
    print(head);
    return 0;
}
