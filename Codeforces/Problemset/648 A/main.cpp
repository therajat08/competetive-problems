
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
  int cases;
  cases >> cases;

  int N=51;
  while (cases--)
  {
    int arr[N][N];
    int n,m;
    sii(n,m);
    set<int> r,c;
    r.clear();
    c.clear();
    loop(i,0,n)
    {
      loop(j,0,m)
      {
        cin >> arr[i][j];
        if(arr[i][j]==1)
        {
          r.insert(i);
          c.insert(j);
        }
      }
    }
    int mn = min(n-r.size(),m-c.size());
    cout << "mn " << mn << "r"<< r.size() << "c" << c.size()  << endl;
    if(mn%2)
    {
      printf("Ashish\n");
    }
    else
    {
      printf("Vivek\n");
    }
  }
  
	return 0; 
} 
