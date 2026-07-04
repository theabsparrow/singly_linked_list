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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void printLinked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

int find_duplicate(Node *head)
{
    int i = 0;

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        int j = i + 1;
        Node *temp = curr->next;

        while (temp != NULL)
        {
            if (curr->value == temp->value)
            {
                return j;
            }

            temp = temp->next;
            j++;
        }

        i++;
    }

    return -1;
}

void delete_at_any_position(Node *&head, int idx)
{

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    while (true)
    {
        int idx = find_duplicate(head);

        if (idx == -1)
            break;

        delete_at_any_position(head, idx);
    }
    printLinked_list(head);
    return 0;
}