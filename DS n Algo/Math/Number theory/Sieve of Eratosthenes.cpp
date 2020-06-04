#include <bits/stdc++.h> 
using namespace std; 

void findPrime(int n)
{
  bool arr[n+1];
  memset(arr, true, sizeof(arr));

  for(int p=2;p*p<=n;p++)
  {
    if(arr[p])
    {
      for(int j=p*p;j<=n;j+=p)
      {
        arr[j]=false;
      }
    }
  }
  for(int i=2;i<=n;i++)
  {
    if(arr[i])
      {cout << i <<" ";}
  }
}

int main()
{
  int n;
  cin >> n;
  cout << "prime number till n are : \n";

  findPrime(n);
  return 0;
}
