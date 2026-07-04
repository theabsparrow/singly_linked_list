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

int main()
{
    Node *head = new Node(50);
    Node *a = new Node(60);
    Node *b = new Node(70);

    head->next = a;
    a->next = b;
    b->next = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    return 0;
}