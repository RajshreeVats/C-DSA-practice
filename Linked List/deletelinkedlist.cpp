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
void deleteList(Node** n) {
    Node* first = *n;
    Node* next = NULL;
    while (first != NULL) {
        next = first->next;
        free(first);
        first = next;
    }
    *n = NULL;

}
int getCount(Node* n) {

    int count = 0;
    Node* first = n;
    while (first != NULL) {
        first = first->next;
        count++;
        return count;
    }

}
int getNode(Node* n, int x) {
    int count = 0;
    Node* current = n;
    while (current != NULL) 
        if(count == x) {
            return (current->data);
            count++;
        
        current = current->next;
    }
    assert(0);
}

int main() {
    int a,b,c,x;
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    
    cout<<"ENTER 3 nodes: ";
    cin>>a>>b>>c;
    head-> data = a;
    head->next = second;
    second->data = b;
    second->next=third;
    third->data=c;
    third->next = NULL;

    cout<<"created list is :- ";
    printList(head);
    cout<<"linked list deleted\n";
    deleteList(&head);
    cout<<"Length of linked list is \n"<<getCount(head);
    cout<<"enter node index of linked list \n";
    cin>>x;
    cout<<"Node at given index is \n"<<getNode(head, x);
    

    return 0;
}