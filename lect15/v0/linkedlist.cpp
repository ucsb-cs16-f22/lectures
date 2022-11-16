//linkedlist.cpp
#include <iostream>
#include <vector>
#include "linkedlist.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Node n {5, nullptr};
    Node *p = new Node {50, nullptr};
    cout << n.data << ", " << n.next << endl;
    cout << p->data << ", " << p->next << endl;
    return 0;
}
