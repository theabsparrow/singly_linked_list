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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

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

void delete_at_any_position(Node *&head, Node *&tail, int idx)
{

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
        if (deleteNode == tail)
    {
        tail = temp;
    }

    delete deleteNode;
}

int count_size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            if (head == NULL)
            {

                insert_at_tail(head, tail, v);
            }
            else
            {
                insert_at_head(head, v);
            }
            print_linked_list(head);
        }
        if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
        }
        if (x == 2)
        {
            int size = count_size(head);

            if (v < size)
            {
                if (v == 0)
                {
                    Node *del = head;
                    head = head->next;
                    delete del;
                }
                else
                {
                    delete_at_any_position(head, tail, v);
                }
            }

            print_linked_list(head);
        }
    }
    return 0;
}