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
    bool duplicate_found = false;
    while (temp != NULL)
    {
        Node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->value == temp2->value)
            {
                duplicate_found = true;
                break;
            }
            temp2 = temp2->next;
        }
        if (duplicate_found)
        {
            cout << "YES" << endl;
            break;
        }
         temp = temp->next;
    }
    if(!duplicate_found)
    {
        cout << "NO" << endl;
    }
    
}
int main()
{
    Node *head = new Node(2);
    Node *a = new Node(4);
    Node *b = new Node(5);
    Node *c = new Node(6);
    Node *d = new Node(7);
    Node *e = new Node(4);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_Linked_list(head);
    return 0;
}