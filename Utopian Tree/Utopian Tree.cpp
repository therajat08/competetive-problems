#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {
    int height = 1;

    int i;

    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            height++;
        }
        else
        {
            height = height*2;
        }
        printf("******height %d***********\n",height);
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

