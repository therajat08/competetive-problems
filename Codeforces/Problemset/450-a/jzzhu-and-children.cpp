#include <bits/stdc++.h>
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
  
  // n children
  // ith child wants atleast ai candies
  // m candies to first child
  int n ,m;
  cin >> n >>m;
 
  map<int, int> c;
  for(int i=1; i<=n;i++)
  {
     int temp;
     cin >> temp;
     c.insert({i,temp});
  }
 
  int lastVisited;
  while(!c.empty())
  {
    for(auto i=c.begin(); i!=c.end();)
    {
      i->second-=m;
      lastVisited=i->first;
      if(i->second<=0)
      {
        c.erase(i++);
        continue;
      }
      i++;
    }
  }
  cout << lastVisited;

  return 0;
}
