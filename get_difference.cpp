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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

int get_max_value(Node *head)
{
    Node *temp = head;
    int max_value = INT_MIN;
    while (temp != NULL)
    {
        if (temp->value > max_value)
        {
            max_value = temp->value;
        }
        temp = temp->next;
    }

    return max_value;
}

int get_min_value(Node *head)
{
    Node *temp = head;
    int min_value = INT_MAX;
    while (temp != NULL)
    {
        if (temp->value < min_value)
        {
            min_value = temp->value;
        }
        temp = temp->next;
    }

    return min_value;
}

void print_linked_list(Node *head)
{
    int max_value = get_max_value(head);
    int min_value = get_min_value(head);
    int difference = max_value - min_value;
    cout << difference << endl;
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
    print_linked_list(head);
    return 0;
}