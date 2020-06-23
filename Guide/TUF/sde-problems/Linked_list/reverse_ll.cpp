
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>

#define loop(i, a, b) for (int i = a; i < b; i++)

#define printVeci(v)                   \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cout << v[i] << endl;          \
    }
#define printAri(v, s)          \
    for (int i = 0; i < s; i++) \
    {                           \
        cout << v[i] << endl;   \
    }
#define co(a) cout << a << endl;
#define coo(a, b) cout << a << " " << b << " " << endl;

#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d %d", &a, &b)
#define siii(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a, b) scanf("%lld %lld", &a, &b)

using namespace std;

typedef vector<int> vi;
struct node
{
    int data;
    struct node * next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct linkedlist{
    node * head;
    linkedlist()
    {
        head = NULL;
    }

    void push(int data)
    {
        node * temp = new node(data);
        temp->next = head;
        head = temp;
    }
    void rev()
    {
        node * current;
        node * prev, * next;

        current = head;
        next = prev = NULL;

        while(current!=NULL)
        {
            next = current->next;
            current->next = prev;

            prev = current;
            current = next;
        }
        head = prev;
    }

    void print()
    {
        node * temp = head;

        while (temp!=NULL)
        {
            cout << temp->data <<" ";
            temp = temp->next;

        }
         
    }
};
int main()
{
    linkedlist ll;
    ll.push(23);
    ll.push(24);
    ll.push(25);
    ll.push(26);
    cout << "given linked list" << endl;

    ll.print();

    ll.rev();
    cout << "new linked list" << endl;

    ll.print();

    return 0;
}
