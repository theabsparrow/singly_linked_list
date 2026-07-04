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

void print_middle(Node *head, int count)
{
    int middle_point = 0;
    int second_middle_point = 0;
    if (count % 2 == 0)
    {
        middle_point = count / 2;
        second_middle_point = middle_point + 1;
        Node *temp = head;
        for (int i = 0; i < middle_point - 1; i++)
        {
            temp = temp->next;
        }
        cout << "Middle elements: " << temp->value << endl;

        Node *temp2 = head;
        for (int i = 0; i < second_middle_point - 1; i++)
        {
            temp2 = temp2->next;
        }
        cout << "Middle elements 2: " << temp2->value << endl;
    }
    else
    {
        middle_point = (count / 2) + 1;
        Node *temp = head;
        for (int i = 0; i < middle_point - 1; i++)
        {
            temp = temp->next;
        }
        cout << "Middle element: " << temp->value << endl;
    }
}

void print_Linked_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    print_middle(head, count);
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
     Node *e = new Node(6);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_Linked_list(head);
    return 0;
}