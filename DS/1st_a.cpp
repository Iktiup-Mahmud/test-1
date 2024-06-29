#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->next = NULL;
        this->val = val;
    }
};


// using recursion
int counter(Node *head, int res)
{
    if (head == NULL)
        return res;
    return counter(head->next, res + 1);
}


// using normal way
int counter2(Node *head)
{
    Node *cur = head;
    int n = 0;
    while (cur != NULL)
    {
        n++;
        cur = cur->next;
    }
    return n;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // cout << counter(head, 0) << endl;
    cout << counter2(head) << endl;

    return 0;
}