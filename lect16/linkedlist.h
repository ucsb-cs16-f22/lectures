// linkedlist.h
using namespace std;

struct LinkedList{
    Node *head;
    Node *tail;
};

struct Node{
    string data;
    Node *next;
};

Node *push_front(Node *h, string value);
void print(Node *h);
bool find(Node *h, string value);
void clear(Node *&h);