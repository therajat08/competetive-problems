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

#define si(a) scanf("%d", &a)
#define sii(a,b) scanf("%d %d", &a, &b)
#define siii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a,b) scanf("%lld %lld", &a, &b)


using namespace std;

typedef vector<int> vi;

int findSum(int a[],int n)
{
  if(n<=0)
  {
    return 0;
  }
  return a[n-1] + findSum(a,n-1);
}
int main()
{
  int a[] = {1,2,3,4,5};
  int size = sizeof(a)/sizeof(a[0]);
  cout << findSum(a,size);
return 0;
}
