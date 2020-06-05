//here we are reversing using "Tail recursion"
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

#define si(a) scanf("%d", &a)
#define sii(a,b) scanf("%d %d", &a, &b)
#define siii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a,b) scanf("%lld %lld", &a, &b)


using namespace std;

typedef vector<int> vi;

int* reversearr(int a[],int i,int l)
{
  if(i<l)
  {
  swap(a[i],a[l-1]);
  reversearr(a,i+1,l-1);
  }
  return a;
}
int main()
{
  int arr[7]={1,2,3,4,5,8,9};
  int size = sizeof(arr)/sizeof(arr[0]);
  int* revarr = reversearr(arr,0,size); 
  printAri(revarr,size);
return 0;
}
