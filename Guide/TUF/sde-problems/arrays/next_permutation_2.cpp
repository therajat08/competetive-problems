
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
#define printAri(v,s) for(int i = 0; i < s; i++) {cout << v[i] << endl;} 
#define co(a) cout << a << endl;
#define coo(a,b) cout << a << " " << b << " " << endl;

#define si(a) scanf("%d", &a)
#define sii(a,b) scanf("%d %d", &a, &b)
#define siii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a,b) scanf("%lld %lld", &a, &b)



using namespace std;

typedef vector<int> vi;

void swap (int ar[], int i , int j)
{
	int temp;
	temp = ar[i];
	ar[i] = ar[j];
	ar[j] = temp; 
}
void rev(int ar[], int i, int s)
{
	int j = s-1;
	i = i+1;
	while(i<j)
	{
		int temp;
		temp = ar[j];
		ar[j] = ar[i];
		ar[i] = temp; 
		i++;
		j--;
	}
}

void nextp(int ar[], int s)
{
	int i = s-2;

	while(i>=0 && ar[i]>= ar[i+1] )
	{
		i--;
	}
	int j = s-1;
	if(i>=0)
	{
		while(j>=0 && ar[j]<=ar[i])
		{
			j--;
		}
	swap(ar,i,j);
	}
	rev(ar,i,s);
	//cout << "ar[i]  is " << i << " ar[j] is " << j;
	//cout << "arr is \n ";
	//printAri(ar,s);


}
int main()
{
    int ar[] = {8,6,4,3};
	int s = sizeof(ar)/sizeof(ar[0]);
	nextp(ar, s);
	cout << "the next greater permutationnis ";
	for(int x : ar)
	{
		cout << x << " ";
	}
   	 return 0;
}
