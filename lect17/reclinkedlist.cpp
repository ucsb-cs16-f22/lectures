//reclinkedlist.cpp
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


void push_front(LinkedList& ll, string value){

    ll.head = push_front(ll.head, value);
    if(ll.tail == nullptr){
        ll.tail = ll.head;
    }

}
void print(LinkedList ll){
    print(ll.head);

}
bool find(LinkedList ll, string value){
    return find(ll.head,value );

}
void clear(LinkedList& ll){
    clear(ll.head);
    ll.head = ll.tail = nullptr;
}

// delete all the nodes with that value and return the new head of the list

// 10->20->30 , value 10,  20->30
// 10->20->20->20->30, value 20, 10->30
// 10->20->30 , value 200,  10->20->30
Node* deleteNode(Node* h, int value){
    if(!h) return nullptr;
    if(h->data == value){
        Node *newhead = deleteNode(h->next, value);
        // delete the first node 
        delete h;
        // return the list obtained from deleting value from the rest of the list
        return newhead;
    }else{
        // 10->20->20->20->30, value 20, 10->30
        Node *newhead = deleteNode(h->next, value);
        h->next = newhead;
        return h;
    }
    
}

int main(int argc, char const *argv[])
{
    vector<string> TAs = {"Alex", "Gautam", "Vino", "Martin"};
    
    TAs.push_back("Gretchan");
    LinkedList list {nullptr, nullptr};

    print(list);

    for(auto elem: TAs){
        push_front(list, elem);
        print(list);
    }
    cout << "Is Vino in list? "<< std::boolalpha << find(list,"Vino") <<endl;
    cout << "Is Diba in list? "<< std::boolalpha << find(list,"Diba") <<endl;
    cout << "Clear all nodes"<< endl;
    clear(list);
    cout << "Print nodes after clear" <<endl;
    print(list);
    push_front(list, "Vino");
    print(list);
    cout << "Is Vino in list? "<< std::boolalpha << find(list,"Vino") <<endl;
    push_front(list, "Diba");
    cout << "Is Vino in list? "<< std::boolalpha << find(list,"Vino") <<endl;
    return 0;
}
