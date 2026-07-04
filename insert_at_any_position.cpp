#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val){
        this->value = val;
        this->next = NULL;
    }
};


void insert_at_any_position(Node *head, int val, int idx){
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i = 0; i < idx -1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printLinkedList (Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main () {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;
    insert_at_any_position(head, 25, 2);
     insert_at_any_position(head, 100, 3);
    printLinkedList(head);
    return 0;
}