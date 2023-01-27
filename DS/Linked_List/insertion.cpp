#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* n) {
    while(n!=NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
//insert new node at the beginning
void insertFront(Node* &head_ptr, int data) {
    //allocate memory to new node
    Node* new_node = new Node();
    //add data
    new_node->data = data;
    //make this new node point where head node is pointing
    new_node->next = head_ptr;
    //make new node as head of the modified linked list
    head_ptr = new_node;
}

void insert(Node* &head_ptr, int key, int data) {
    //allocate memory to new node
    Node* new_node = new Node();
    //add data
    new_node->data = data;
    Node* temp = head_ptr;
    while(temp->data!=key) {
        temp = temp->next;
        if(temp==NULL) {
             return;
        }
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void append(Node *&head_ptr, int data) {
    Node* new_node = new Node();
    //add data
    new_node->data = data;
    Node* temp = head_ptr;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
}

int main()
{
    //allocating memory to newly formed nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    //formation of 3 node linked list
    head->data = 1;
    head->next = second;
    second->data=2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    //print linked list before insertion of node;
    printList(head);

    //insert new node at the front 
    //passing address of head node
    insertFront(head, 9);
    printList(head);
    insert(head, 9, 5);
    printList(head);
    append(head, 10);
    printList(head);
    return 0;
}