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
    bool is_sorted = true;
    while (temp != NULL)
    {
        Node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->value > temp2->value)
            {
                is_sorted = false;
                break;
            }
            temp2 = temp2->next;
        }
        if (!is_sorted)
        {
            break;
        }
        temp = temp->next;
    }
    if (is_sorted)
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head = new Node(2);
    Node *a = new Node(4);
    Node *b = new Node(6);
    Node *c = new Node(5);
    Node *d = new Node(8);
    Node *e = new Node(4);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_Linked_list(head);
    return 0;
}