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

void check_equal(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool is_equal = true;
    while (temp1 != NULL)
    {
        if(temp1->value != temp2->value)
        {
            is_equal = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(is_equal)
    {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;

    }
}


int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;

        insert_at_tail(head2, tail2, val2);
    }

    int size1 = count_size(head1);
    int size2 = count_size(head2);
    if (size1 != size2)
    {
        cout << "NO" << endl;
    }
    else
    {
        check_equal(head1, head2);
    }

    return 0;
}