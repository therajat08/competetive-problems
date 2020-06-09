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

#define si(a) scanf("%d", &a)
#define sii(a,b) scanf("%d %d", &a, &b)
#define siii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a,b) scanf("%lld %lld", &a, &b)



using namespace std;

typedef vector<int> vi;

int nsize(int n)
{
  int ans=0;
  while(n)
  {
    n/=10;
    ans++;
  }
  return ans;
}
int main() 
{ 
  int n;
  cin >> n;
  int size;
  set<int> s;
  int temp;
  while(1)
  {
    n++;
    temp=n;
    size = nsize(n);
    s.clear();
    while (temp)
    {
      s.insert(temp%10);
      temp/=10;
    }
    if(size==s.size())
    {
      cout << n;
      break;
    }
  }
  return 0;
} 
