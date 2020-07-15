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
#define printAri(v,s) for(int i = 0; i < s; i++) {cout << v[i] << endl;} 
#define pri(a) printf("%d\n",a);
#define co(a) cout << a << endl;
#define coo(a,b) cout << a << " " << b << " " << endl;

#define si(a) scanf("%d", &a)
#define sii(a,b) scanf("%d %d", &a, &b)
#define siii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a,b) scanf("%lld %lld", &a, &b)



using namespace std;

typedef vector<int> vi;

int len(int n)
{
  int a=0;
  while(n)
  {
    a++;
    n/=10;
  }
  cout <<" "<< a <<endl; 
  return a;
}

int main() 
{ 
  int n1;
  int n2;
  vi vec;

  cin >> n1 >> n1;
  int op1;
  int op2;
  int l = len(n1);

  while (l)
  {
    int res;
    op1 = n1 % 10;
    op2 = n2 % 10;
    res = op1 ^ op2;
    vec.insert(vec.begin(), res);

    n1 /= 10;
    n2 /= 10;
    l = len(n1);
  }

  for (int x : vec)
  {
    cout << x;
  }
  return 0;
}
