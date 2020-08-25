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
    int n;

    cin >> n;

    int x[n];
    int y[n];

    for(int i=0; i< n; i++)
    {
      cin >> x[i];
      cin >> y[i];
    }

    int count=0;
    for(int i=0; i< n; i++)
    {
      int l=0, r=0, t=0, b=0;

      for(int j=0; j<n; j++ )
      {
        if(x[i]==x[j] && y[j]<y[i])
        {
          b = 1;
        }
        else if(x[i]==x[j] && y[j]>y[i])
        {
          t = 1;
        }
        else if(y[i]==y[j] && x[j]>x[i])
        {
          r = 1;
        }
        else if(y[i]==y[j] && x[j]<x[i])
        {
          l = 1;
        }
      }
      if(r==1 && l==1 && t==1 && b==1)
      {
        count++;
      }
    }
    cout << count;


    return 0;
}
