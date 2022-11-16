// linkedlist.h
using namespace std;
struct Node{
    string data;
    Node *next;
};

Node *push_front(Node *h, string value);