/* Length of linked list, insert element at front, search for element, print linked list,*/
/* find element at Nth index */
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data,key;
      Node* next;
};
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int getCount(Node* head) {
    int count = 0;
    Node* current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}
bool search (Node *head, int x) {
    Node* current = head;
    while(current != NULL){
        if (current->key == x) {
            return true;
            current = current->next;
        }
        return false;
    }

}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

int getNode(Node* head, int x) {
    Node* current = head;
    int count = 0;
    while (current != NULL) {
        if (count == x)
            return (current->data);
        count++;
        current = current->next;
    }
    assert(0);
}

int main () {
    int a,b,c;
    int ind,x,y;

    Node* head = new Node();
    Node* Second = new Node();
    Node* third = new Node();

    cout<<"enter first 3 nodes ";
    cin>>a>>b>>c;
    head->data = a; 
    head->next = Second;
    Second->data = b; 
    Second->next = third;
    third->data = c; 
    third->next = NULL;
    cout<<"Enter Number of Nodes and value to add";
    cin>>ind>>y;
    for(int i =0; i<ind; i++) {
        push(&head, y);
    }
    cout<<" created linked list is ";
    printList(head);

    cout<<" length of linked list is "<<getCount(head)<<endl;
    cout<<"enter node index of linked list \n";
    cin>>x;
    cout<<"Node at given index is \n"<<getNode(head, x);
    search(head, 2)? cout<<"\nYes" : cout<<"\nNo"; 

    return 0;

}