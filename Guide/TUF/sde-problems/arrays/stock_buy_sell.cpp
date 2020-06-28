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

int doit(int ar[], int size)
{
	int profit = 0;
	
	int i=0;
	int buy;
	int sell;
	while(i<size)
	{
		while(i<size-1  && ar[i]>=ar[i+1])
		{
			i++;
		}

		if(i==size-1)
		{
			return 0;// whenn the prices are given in descending order
		}
		buy = i;
		i++;

		while(i<size && ar[i]>=ar[i-1])
		{
			i++;
		}
		sell = i-1;
		cout << "Buy on " << buy << " sell on " << sell << endl;
		profit+=ar[sell]-ar[buy];
	}
	return profit;

}
int main()
{
    int ar[] = {90,80,70,50,40,30,25,18};

	int size = sizeof(ar)/sizeof(ar[0]);

	int profit = doit(ar,size);

	cout << "profit is " << profit;
    return 0;
}
