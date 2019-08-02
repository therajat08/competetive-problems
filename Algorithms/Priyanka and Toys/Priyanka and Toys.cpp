#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[],int s)
        {

                for(int i =0;i<s;i++)
                {

                            cout << arr[i] << " ";
                }
                    printf("\n");
        }

int main()
{
        int numberOfToys;




        int i,j,jumpTo=0;

        long numberOfContainers=0;
        int minWeight=0;

        cin >> numberOfToys;
        long *arr = new long[numberOfToys];
        for(i=0;i<numberOfToys;i++)
        {
            cin >> arr[i];
            //printf("**********************************");
        }

        sort(arr,arr+numberOfToys);

       // printArray(arr,numberOfToys);
       for(i=0;i<numberOfToys && jumpTo<numberOfToys;i++)
       {
           i=jumpTo;
           //printf("\ni : %d\n",i);
           minWeight = arr[i];
           for(j=i+1; j<numberOfToys;j++)
           {
               if(arr[j]<=arr[i]+4)
               {

                   jumpTo++;
               }
               else
                {

                    break;
                }
           }
           jumpTo++;
           numberOfContainers++;
       }
        cout << numberOfContainers;


        return 0;
}



