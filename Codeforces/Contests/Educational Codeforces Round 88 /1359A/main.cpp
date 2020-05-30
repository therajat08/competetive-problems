#include <iostream>
#include <vector>
#include <string.h>
#include<bits/stdc++.h>

#define veci vector<int>
#define loop(i,a,b) for (int i = a; i < b; i++)
#define MAX_size 1000005
using namespace std;

/*
//one solution
int main()
{
  int cases;
  cin >> cases;
  int cards, jokers, players;
  int share,a1,a2;


  while(cases--)
  {
    cin >> cards >> jokers >> players;
    share = cards/players; 
    a1 = min(share,jokers);
    a2 = (jokers - a1 + players -2)/(players-1);

    cout << a1-a2 <<endl;
  }
  return 0;
}
*/

//another
int main()
{
  int cases;
  cin >> cases;
  int cards, jokers, players;
  int share,a1,a2,ans;
  loop(i,1,cases+1)
  {
    cin >> cards >> jokers >> players;
    ans=0;
    share = cards/players;
    loop(a1,0,jokers+1)
    {
      loop(a2,0,a1+1)
      {
        if(a1>share)
        {
          continue;
        }
        if(a1+a2 >jokers)
        {
          continue;
        }
        if(a1 + (players-1)*a2 < jokers)
        {
          continue;
        }
        ans = max(ans,a1-a2);
      }
    }
    cout << ans << endl;  
  }
  
  return 0;
}