// linkedlist.h
#include <string>
using namespace std;

struct Node{
   string data;
   Node *next;
};

struct LinkedList{
   Node *head;
   Node *tail;
};

Node *push_front(Node *h, string value);
void print(Node *h);
bool find(Node *h, string value);
void clear(Node *&h);
