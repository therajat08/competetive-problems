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

#define loop(i,a,b) for (int i = a; i < b; i++)

#define printVeci(v) for(int i = 0; i < v.size(); i++) {cout << v[i] << endl;} 

#define si(a) scanf("%d", &a)
#define sii(a,b) scanf("%d %d", &a, &b)
#define siii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a,b) scanf("%lld %lld", &a, &b)



using namespace std;

typedef vector<int> vi;
typedef long long ll;
struct node{
	int data;
	struct node * next;
	node(int data)
	{
       		this->data = data;
	}
};
struct linkedList{
	node * head;
	linkedList()
	{
		head = NULL;
	}
	void push(int data)
	{
		node* temp = new node(data);
		temp->next = head;
		head = temp; 
	}
	void print()
	{
		struct node * temp = head;
		while(temp!=NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		printf("\n");
	}
	void del(int n)
	{
		struct node * first = head;
		struct node * second = head;

		for (int i = 0;  i < n; ++i) {
			// if the n to be deleted is >= count of nodes 
			if(second->next==NULL)
			{
				// id nodes are equal to n
				// or we have to delete n node from end
				// or the first node
				if(i==n-1)
					head = head->next;
				return;
			}
			second = second->next;	
		}
		while(second->next!=NULL)
		{
			first = first->next;
			second = second->next;
		}
		// now first will be pointing to the node
		// preceeding the one we have to delete
		first->next = first->next->next;
		// return head;

	}
}; 
int main()
{
    linkedList ll;

	ll.push(1);
	ll.push(2);
	ll.push(3);
	ll.push(4);
	ll.push(5);
	ll.push(6);
	ll.push(7);
	ll.push(8);
	ll.push(9);
	ll.push(10);

	ll.print();

	ll.del(3);

	ll.print();

    return 0;
}
