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
int search_val(Node *head, int f_v, int cnt)
{
    if (head == NULL)
        return 0;

    if (head->val == f_v)
    {
        return cnt + 1;
    }

    return search_val(head->next, f_v, cnt + 1);
}

// using normal way
int search_val2(Node *head, int f_v)
{
    Node *tmp = head;
    int ans = 0;
    while (tmp)
    {
        ans++;
        if (tmp->val == f_v)
            return ans;
        tmp = tmp->next;
    }
    return 0;
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

    // cout << search_val(head, 60, 0) << endl;
    cout << search_val2(head, 40) << endl;

    return 0;
}