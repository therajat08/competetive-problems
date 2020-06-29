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
	int contests;
	si(contests);
	int amazing=0;
	int highestSoFar=INT_MIN;
	int lowestSoFAr=INT_MAX;
	for(int i=0;i<contests;i++)
	{
		int currentRating ;
		si(currentRating);
		if( i!=0 && (currentRating < lowestSoFAr || currentRating > highestSoFar))
		{
			amazing++;
		}
		highestSoFar = max(highestSoFar,currentRating);
		lowestSoFAr = min(lowestSoFAr,currentRating);
		// cout << "highest " << highestSoFar << "lowestSoFAr " << lowestSoFAr <<" "<<  amazing << endl;
	}
	cout << amazing;
    return 0;
}
