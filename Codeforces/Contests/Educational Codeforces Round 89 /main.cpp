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

/*
int main() 
{ 
  int cases;

  cin >> cases;

  while(cases--)
  {
    int s,d;
    int count=0;
    sii(s,d);
    //coo(s,d);
    while (s > 0 && d > 0)
    {
      if(s>=2*d||d>=2*s)
      {
        count = s>d?s/2:d/2;
        cout << "here" << endl;
        break; 
      }
      else
      
      if (s >= d)
      {
        if(s==d && s!=1)
        {
          s -= 2;
          d -= 1;
          count++;
        }
        else if(s==d && s==1)
        {
          break;
        }
        else if(s!=d)
        {
          s -= 2;
          d -= 1;
          count++;
        }
        
        //cout << "here" << endl;
      }
      else if (d > s)
      {
        d -= 2;
        s -= 1;
        count++;
      }
    //  }
      //co(count);
      //coo(s,d);
    }
    cout << count << endl;
  }
  return 0;
}
*/

//working code
int main()
{
    int cases;

    cin >> cases;

    while(cases--)    
    {
        int s,j;

        cin >> s >> j;

        cout << min(min(s,j),(s+j)/3)<<endl;
    }
    return 0;
}
