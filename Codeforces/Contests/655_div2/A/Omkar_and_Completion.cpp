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
	int cases;

	cin >> cases;

	while(cases--)
	{
		int size;

		cin >> size;
		
		int random;
		random = rand() % 1000 + 1;
		if(size&1)
		{
			for(int i = 1; i<=size/2; i++)
			{
				cout << random << " ";
			}
			cout << " 2 ";
			for(int i= (size/2)+2; i<= size;i++)
			{
				cout << random+1 << " ";
			}
		}
		else
		{
			for(int i = 1; i<=size/2; i++)
			{
				cout << random << " ";
			}
			for(int i= (size/2)+1; i<= size;i++)
			{
				cout << random+1 << " ";
			}

		}
		cout << "\n";

	}
	
    return 0;
}
