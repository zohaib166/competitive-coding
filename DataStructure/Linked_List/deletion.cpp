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

void deleteNode(Node* &head_ptr, int data) {
    Node* temp, *prev=NULL;
    temp = head_ptr;
    if(head_ptr==NULL) {
        cout << "List is empty\n";
        return;
    }
    //if the head node has the data to be deleted
    if(temp!=NULL && temp->data==data) {
        //secure the head by pointing it to next node
        head_ptr = temp->next;
        delete temp;
        return;
    }
    while(temp!=NULL && temp->data!=data) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;

    delete(temp); 
}

void deleteList(Node *&head_ptr) {
    Node *temp;
    temp = head_ptr;
    Node *next_node = NULL;
    cout << "deleting Linked List...\n";
    while(temp->next!=NULL) {
        next_node = temp->next;
        delete(temp);
        temp = next_node;
    }
    head_ptr=NULL;
    cout << "Linked List deleted\n";
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
    append(head, 4);
    append(head, 5);
    append(head, 6);
    printList(head);
    deleteNode(head,4);
    printList(head);
    deleteList(head);
    printList(head);
    return 0;
}