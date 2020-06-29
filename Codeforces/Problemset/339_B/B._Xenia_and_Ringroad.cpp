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
#define siiii(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d);

#define sl(a) scanf("%lld", &a)
#define sll(a, b) scanf("%lld %lld", &a, &b)

using namespace std;

typedef vector<int> vi;
typedef long long  ll;

int main()
{
	int houses, tasks;

	vi a;

	int d;
	sii(houses,tasks);
	loop(i,0,tasks)	
	{
		si(d);
		a.push_back(d);
	}

	long long time=0;
	int j = 1;
		for(int i = 0;i<tasks; i++)
		{
			int temp = a[i];

			if(j<=temp)
			{
				time+=temp-j;
				j = temp;
			}
			else if(j>temp)
			{
				time+= houses - j + temp;
				j = temp;
			}
		}
		cout << time;
    return 0;
}
