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
  int ar[] = {4, 3, 6, 2, 1, 6,7}; 

  long long sum_n;
  long long sum_nsq;

  int n = sizeof(ar)/sizeof(ar[0]);

  sum_n = ( n*(n+1) )/2;
  sum_nsq = (n*(n+1)*(2*n+1))/6;

  for(int i=0; i<n; i++)
  {
    sum_n -= (long long )ar[i];
    // now we see it as x - y = a  (say)
    sum_nsq -= (long long )(ar[i])*(long long )(ar[i]);
    // now we see it as x^2 - y^2 = sum_nsq` or x + y = b (say)
  }

  int missingNum = 0;// x
  int repeatingNum = 0; // y

  missingNum = (sum_n + sum_nsq/sum_n)/2; 
  // sum formula used here. i.e 
  repeatingNum = missingNum - sum_n; //y = a - x

  cout << "missingNum " << missingNum << "repeatingNum " << repeatingNum;

    return 0;
}
