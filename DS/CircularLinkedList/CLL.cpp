#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* addToEmpty(Node *last, int num) {
    last = new Node();
    last->data =num;
    last->next = last;
    return last;
}
Node* addBegin(Node *last, int num) {
    Node* new_node = new Node();
    if(last==nullptr) {
        cout << "The list is empty\n";
        return nullptr;
    }
    new_node->data = num;
    new_node->next = last->next;

    last->next = new_node;

    return last;

}

Node *addToLast(Node *last, int num) {
    Node *new_node = new Node();
    if(last==nullptr) {
        cout << "The list is empty\n";
        return nullptr;
    }
    new_node->data = num;
    new_node->next = last->next;
    last->next = new_node;
    last = new_node;
    return last;
}

Node *addAfter(Node *last, int num, int key) {
    if(last==nullptr) {
        cout << "The list is empty\n";
        return nullptr;
    }
    Node *new_node = new Node();
    Node *p = last;
    while(p->data != key && p->next!=last) {
        p = p->next;
    }
    new_node->data = num;
    new_node->next = p->next;
    p->next = new_node;
    if (p == last)
        last = new_node;

    return last;

}

void traverse(Node *last) {
    Node *temp;
    if(last==nullptr) {
        cout << "The list is empty\n";
        return;
    }
    temp = last->next;
    while(true) {
        cout << temp->data << " ";
       
        temp=temp->next;
        if(temp==last->next) break;
    }
    cout << "\n";
}
int main()
{
    Node *last = nullptr;
    last = addToEmpty(last, 5);
    traverse(last);
    last = addBegin(last, 4);
    last = addBegin(last, 2);
    traverse(last);
    last = addToLast(last, 6);
    traverse(last);
    last = addAfter(last, 8, 6);
    traverse(last);
}