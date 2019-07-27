#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int numberOfQuerries;
    long int sizeOfArray;
     long int i,j,sum=0;
    long int initialPosition,finalPosition,newValue;
    long int *maxElement;

    long maximum=0;

    cin >> sizeOfArray;
    cin >> numberOfQuerries;

     long int *arr =new long int[sizeOfArray+2];
    for(i=0;i<sizeOfArray+2;i++)//initializing array
    {
        arr[i] = 0;
    }

    for(i=0;i<numberOfQuerries;i++)//for taking the querries in
    {
        cin >> initialPosition;
        cin >> finalPosition;
        cin >> newValue;

       arr[initialPosition]+= newValue;
       arr[finalPosition+1]-= newValue;


       /*for (int k = 0; k < sizeOfArray+2; k++)
           {
                cout << ' ' << arr[k];
           }
           cout << '\n';*/

    }


    for(i=0;i<sizeOfArray+2;i++)
    {
        sum+=arr[i];
        maximum = max(maximum,sum);
    }




    //maxElement = max_element(arr,arr+sizeOfArray);
   cout << maximum;

    return 0;
}
