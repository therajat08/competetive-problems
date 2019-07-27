#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int numberOfQuerries;

    unsigned long int sizeOfArray;
    unsigned long int i,j,k;
    unsigned long int initialPosition,finalPosition,newValue;
    unsigned long int *maxElement;



    cin >> sizeOfArray;
    cin >> numberOfQuerries;

    unsigned long int *arr =new unsigned long int[sizeOfArray];
    for(i=0;i<sizeOfArray;i++)//initializing array
    {
        arr[i] = 0;
    }

    for(i=0;i<numberOfQuerries;i++)//for taking the querries in
    {
        cin >> initialPosition;
        cin >> finalPosition;
        cin >> newValue;

        for(j=initialPosition-1;j<=finalPosition-1;j++)
            {
                arr[j] = 1LL*arr[j]+newValue;
            }
           /*for (int k = 0; k < sizeOfArray; k++)
           {


                cout << ' ' << arr[k];
           }
           cout << '\n';*/

    }




    maxElement = max_element(arr,arr+sizeOfArray);
    printf("%d",*maxElement);

    return 0;
}
