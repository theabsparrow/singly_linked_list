#include <bits/stdc++.h>
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

int main()
{
    Node a(10), b(20), c(30);
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.value << " " << (*a.next).value << " " << a.next->next->value << endl;
    return 0;
}