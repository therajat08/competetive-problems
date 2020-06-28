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
    int k,l,m,n,dragons;
	cin >> k >> l >> m >> n >> dragons;
	int ans=0;
	loop(i,1,dragons+1)
	{
		if(k==1||l==1||m==1||n==1)
		{
			ans = dragons;
			break;
		}
		if( i%k==0||
			i%l==0||
			i%m==0||
			i%n==0)
		{
			ans+=1;
		}
		else{
			continue;
		}

	}
	cout << ans;
    return 0;
}
