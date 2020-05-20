#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {
    int height = 1;

    int i;

    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)//spring : height doubles
        {
            height = height*2;

        }
        else//summer : height increases by 1
        {
            height++;
        }
       // printf("******height %d***********\n",height);
    }
    return height;

}

int main()
{
   int testCases;

   int numberOfCycles;

   cin >> testCases;

   for(int i=0;i<testCases;i++)
   {
       cin >> numberOfCycles;
       printf("%d\n",utopianTree(numberOfCycles));
   }

    return 0;
}

