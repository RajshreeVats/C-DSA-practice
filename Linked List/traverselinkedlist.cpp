#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; // assign data in first node
    head->next = second;
    second->data = 2; // assign data in first node
    second->next = third;
    third->data = 3; // assign data in first node
    third->next = NULL;

    printList(head);
    return 0;
}