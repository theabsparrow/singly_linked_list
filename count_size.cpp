#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};
void print_Linked_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "\nCount: " << count << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(5);
    Node *b = new Node(1);
    Node *c = new Node(4);
    Node *d = new Node(5);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_Linked_list(head);
    return 0;
}