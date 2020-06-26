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
#include <climits>

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

int kadane(int ar[], int size)
{
	int max_sofar = INT_MIN;

	int max_here = 0;

	loop(i,0,size)
	{
		max_here = max_here + ar[i];

		if(max_sofar<max_here)
		{
			max_sofar = max_here;
		}
		if (max_here<0) {
			max_here = 0;	
		}
	}
	return max_sofar;
}
int main()
{
    int ar[] = {1,2,-3,0,-4,6,7};

	int size = sizeof(ar)/sizeof(ar[0]);

	int res = kadane(ar,size);

	cout << res;

    return 0;
}
