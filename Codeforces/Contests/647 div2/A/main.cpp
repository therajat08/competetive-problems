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

/*

int main()
{
    int cases;
    si(cases);
    long long from,to;
    int count=0;
    while (cases--)
    {
     bool flag=true;
     cin >> from >> to;
     if(from==to)
     {
          cout << 0 <<endl;
          flag = false;
          continue;
     } 
     else if (from>to)
     {
       while (to<from)
       {
        from = from>>1;
        count++;
        if(from<to)
        {
          cout << -1 <<endl;
          flag = false;
          continue;
        }
       }
       
     }
     else if(from<to)
     {
       while (from<to)
       {
        from = from<<1;
        count++;
        if(from>to)
        {
          cout << -1<<endl;
          flag = false;
          continue;
        }
         
       }
       
     }
     cout << count <<endl;
     
     int ans=0;
     while(count!=0)
     {
       //cout << count; 
       //cout  <<ans;
       if(count>=3)
       {
          ans++;
          if(count>3)
          {
            count = count/3;
            continue;
          }
          else if(count==3)
          {count = count%3;}
       }
       else if(count==2)
       {
         ans+=1;
         count=count%2;
       }
       else if (count==1)
       {
        ans+=1;
        count = count%1;
        break;
       }
       
     }
    if(flag) 
     {cout << ans << endl; }
    }//end of cases while
            
    return 0;
}
*/
// new approach
int main()
{
    int cases;
    si(cases);
    long long from,to;
    int count=0;
    while (cases--)
    {
      cin >> from >> to; 

      if(from<to)
      {
        swap(from,to);
      }
      long long count=0;
      while(to<from)
      {
        count++;
        if(from>=8*to && from%8==0)
        {
          from/=8;
        }
        else if(from>=4*to && from%4==0)
        {
          from/=4;
        }
        else if(from>=2*to && from%2==0)
        {
          from/=2;
        }
        else
        {
          break;
        }        

      }
      if(from==to)
      {
        cout << count << endl;
      }
      else
      {
        cout << -1 << endl;
      }
      
    }

return 0;
}
