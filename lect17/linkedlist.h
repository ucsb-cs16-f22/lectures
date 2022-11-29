// linkedlist.h
#include <string>
using namespace std;

struct Node{
   string data;
   Node *next;
};

struct LinkedList{
   Node *head; // pointer to the first node
   Node *tail; // pointer to the last node
};

//Helper functions!
Node *push_front(Node *h, string value);
void print(Node *h);
bool find(Node *h, string value);
void clear(Node *&h);


void push_front(LinkedList& ll, string value);
void print(LinkedList ll);
bool find(LinkedList ll, string value);
void clear(LinkedList& ll);
