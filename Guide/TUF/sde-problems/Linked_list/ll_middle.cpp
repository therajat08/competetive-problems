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
		struct node *next;
		node(int data)
		{
				this->data = data;
				next = NULL;
		}
};

struct linkedList{
		node* head;
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
			struct node* temp = head;
			while(temp!=NULL)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
			printf("\n");
		}
		void printMiddle()
		{
			struct node * slow = head;
			struct node * fast = head;
			if(head!=NULL)
			{
				while(fast!=NULL && fast->next!=NULL)
				{
					fast = fast->next->next;
					slow = slow->next;
				}
				printf("middle of linked list %d\n",slow->data );
			}
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
	
	ll.print();
	// method used here: slow fast pointer
	ll.printMiddle();

    return 0;
}
