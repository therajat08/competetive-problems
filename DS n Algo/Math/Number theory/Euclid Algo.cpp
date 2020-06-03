#include <bits/stdc++.h> 
using namespace std; 

int main()
{
  int a,b;
  int biggerNum, smallerNum,something,rem=0;
  cin >> a>> b;
  if(a>b)
  {
    biggerNum = a;
    smallerNum = b;
  }
  else
  {
    biggerNum = b;
    smallerNum = a;
    
  }

  int prevRem=0;
  do
  {
    prevRem=rem;

    something = biggerNum/smallerNum;
    rem = biggerNum%smallerNum;

    biggerNum = smallerNum;
    smallerNum = rem;
  }while(rem!=0);

  cout << prevRem;

  return 0;
}
