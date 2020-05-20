#include <bits/stdc++.h>

using namespace std;

int main()
{
  int dishes;
  int anaAteIndex;
  int anaPaid;
  vector<int> dishCost;

  cin >> dishes;
  cin >> anaAteIndex;

  int cost;
  for(int i=0;i<dishes;i++)
  {
    cin >> cost;
    dishCost.push_back(cost);
  }

  cin >> anaPaid;

  int anaNeedToPay;
  int totalShared=0;
  for(int i=0;i < dishes;i++)
  {
    if(i==anaAteIndex)
    {
      continue;
    }
    else 
    {
      totalShared+=dishCost[i];
    }
  }
  anaNeedToPay=totalShared/2;

  if(anaPaid==anaNeedToPay)
  {
    cout << "Bon Appetit";
  }
  else
  {
    cout << anaPaid-anaNeedToPay;
  }
  return 0;
}