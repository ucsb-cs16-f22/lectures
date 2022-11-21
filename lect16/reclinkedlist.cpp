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
    // Base case(s)
    if(h == nullptr){
        cout << endl;
        return;
    }
    // Recursive case
    //1. Print the value of the head of the list
    cout << h->data << " ";
    //2. Print the rest of the list
    print(h->next);
}

bool find(Node *h, string value){
    // Base case: 1
    if(!h) {
        return false;
    }
    // Base case: 2
    if(h->data == value){
        return true;
    }
    return find(h->next, value);
    // Does the code return true or false on a 2-node
    // linked list "Diba"->"Vino"->nullptr
    // value = "Vino"   
 
}

void clear(Node *&h){
    if(!h) return;
    clear(h->next);
    delete h;
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
    head = push_front(head, "Vino");
    print(head);
    cout << "Is Vino in list? "<< std::boolalpha << find(head,"Vino") <<endl;
    head = push_front(head, "Diba");
    cout << "Is Vino in list? "<< std::boolalpha << find(head,"Vino") <<endl;


    return 0;
}
