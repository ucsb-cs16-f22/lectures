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

    print(head);

    for(auto elem: TAs){
        head = push_front(head, elem);
        print(head);
    }
    cout << "Is Vino in list? "<< std::boolalpha << find(head,"Vino") <<endl;
    cout << "Is Diba in list? "<< std::boolalpha << find(head,"Diba") <<endl;
    cout << concatenate(head) << endl;
    cout << "Clear all nodes"<< endl;
    clear(head);
    cout << "Print nodes after clear" <<endl;
    print(head);
    return 0;
}
