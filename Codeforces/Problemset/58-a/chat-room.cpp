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
    string s;

    cin >> s;

    int flag=0;
    if(s.length()<5)
    {
      cout << "NO";
      return 0;
    }
    else{
      int i=0, j=0;
      string match="hello";
      while(i<s.length() && j<5)
      {
        if(s[i]==match[j])
        {
        // cout <<s[i] <<" "<< match[j] << endl;
          i++;
          j++;
          continue;
        }
        i++;
      }
      if(j==5)
      {
        cout << "YES";
      }
      else{
        cout << "NO";
      }
    }
    return 0;
}

