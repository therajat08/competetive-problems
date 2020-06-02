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
  
int main()
{
    int cases;

    cin >> cases;
    int arr[26]={0};
    string name;
    while (cases--)
    {
      cin >> name;
      arr[name[0]-'a']++;
    }
    int ans=0;
    loop(i,0,26) 
    {
      int left;
      int right;
      
        left=arr[i]/2;
        right=arr[i]-arr[i]/2;
        if(left>1)
        {
          ans+=(left*(left-1))/2;
        }
        if(right>1)
        {
          ans+=(right*(right-1))/2;
        }
      
    }
    cout << ans;
    return 0;
}
