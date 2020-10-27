#include <bits/stdc++.h>

using namespace std;

void find(int ar[], int s, int *x, int *y)
{
   int xor1=ar[0];

   int set_bit_no;

   *x=0;
   *y=0;

   for(int i=1;i<s;i++)
   {
    xor1 = xor1^ar[i];
   }

   for(int i=1;i<=s;i++)
   {
    xor1 = xor1^i;
   }

   set_bit_no = xor1 & ~( xor1-1 );// to check if right most bit of xor1 is set or not

   for(int i = 0; i<s; i++)
   {
    if(ar[i] & set_bit_no)
      *x = *x^ar[i];
    else
      *y = *y^ar[i];
   }

   for(int i=1; i<=s; i++)
   {
    if(i&set_bit_no)
      *x = *x^i;
    else
      *y = *y^i;
   }

   cout << "missing value is " << *x  << endl;
   cout << " repeating is " << *y << endl;
   cout << set_bit_no;

}

int main(){
  int ar[] = {4,5,6,2,1,1};

  int *x = (int*)malloc(sizeof(int));
  int *y = (int*)malloc(sizeof(int));

  int s = sizeof(ar)/sizeof(ar[0]);

  find(ar,s,x,y);

  return 0;

}
