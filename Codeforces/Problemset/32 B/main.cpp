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

int main() 
{ 
  string str;
  cin >> str;

  for(int i=0;i<str.length();)
  {
    if(str[i]=='.')
    {
      cout << 0;
      i++;
    }
    else if (str[i]=='-')
    {
      if(str[i+1]=='.')
      {
        cout << 1;
        i+=2;
      }
      else if (str[i+1]=='-')
      {
        cout << 2;
        i+=2;
      }
      
    }
    
  }
  return 0;
} 
