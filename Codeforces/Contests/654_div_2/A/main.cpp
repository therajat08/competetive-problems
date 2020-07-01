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
int main()
{
	int cases;
	si(cases);
	int ans=0;
	while(cases--)
	{
		int t;
		si(t);

		if(t==1 || t==2)
		{
			ans = 1;
			cout << ans << endl;
		}
		else{
			ans = 1 + (t-1)/2;
			cout << ans << endl;

		}
	}
	return 0;
}
