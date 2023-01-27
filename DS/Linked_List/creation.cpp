#include <iostream>
using namespace std;
//Note: this code does not print anything
class Node {
public:
    int data;
    Node* next;
};

int main()
{
    //allocating memory to newly formed nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    //add data to head node and make it point to second node
    head->data = 1;
    head->next = second;
    //add data to second node and make it point to third node
    second->data=2;
    second->next = third;
    //add data to third node and make it point to null as it is the last node
    third->data = 3;
    third->next = NULL;
    return 0;
}