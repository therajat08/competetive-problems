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

bool func(int a, int b)
{
  return a > b;
}

int main()
{
  // n - passengers , m- planes
    int n, m;
    cin >> n >> m;
    int ar1[m];// for max
    int ar2[m];// for min

    for(int i=0; i<m; i++)
    {
      int temp;
      cin >> temp;
      ar1[i] = temp;
      ar2[i] = temp;
    }

    // finding max
    int max=0; 
    sort(ar1, ar1+m, func);// sorting in desc order
    for(int i=0; i<n; i++)
    {
      max+= ar1[0];
      ar1[0]--;
      sort(ar1, ar1+m, func);
    }
    // finding min
    int min = 0;
    sort(ar2, ar2+m);
    for(int i=0; i<n; i++)
    {
      min+=ar2[0];
      ar2[0]--;
      if(ar2[0]==0)
      {
        ar2[0]=99999;// if it becomes 0 put to last 
      }
      sort(ar2, ar2+m);
    }

    cout << max << " " << min;
    return 0;
}
