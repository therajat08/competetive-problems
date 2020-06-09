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
  int size;
  si(size);

  int time;
  si(time);

  string str;
  cin >> str;
  int swapcout=0;
  while (time--)
  {
    for(int i=0;i<str.length()-1;)
    {
      if(str[i]=='B'&&str[i+1]=='G')
      {
        swapcout++;
        swap(str[i],str[i+1]);
        i+=2;
        //cout << i << " ";
        continue;
      }
      i++;
    }
  }
  //cout << swapcout; 
  cout << str << endl;
  return 0;
} 
