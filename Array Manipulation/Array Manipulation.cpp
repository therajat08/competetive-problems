#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int numberOfQuerries;

    unsigned long int sizeOfArray;
    unsigned long int i,j,input;
    unsigned long int initialPosition,finalPosition,newValue;
    unsigned long int *maxElement;

    vector<vector<unsigned long int> > querries;

    cin >> sizeOfArray;
    cin >> numberOfQuerries;

    unsigned long int *arr =new unsigned long int[sizeOfArray];
    for(i=0;i<sizeOfArray;i++)//initializing array
    {
        arr[i] = 0;
    }

    for(i=0;i<numberOfQuerries;i++)//for taking the querries in
    {
        querries.push_back(vector<unsigned long int>());//creating a new row in 2d vector

        for(j=0;j<3;j++)
        {
            cin >> input;
            querries[i].push_back(input);
        }

    }
    /* testing if the 2d vector is looking good or not

    for (int i = 0; i < numberOfQuerries; i++)
    {
        for(j=0;j<3;j++)
        {
            cout << ' ' << querries[i][j];
        }
        cout << '\n';
    }*/



    for(i=0;i<numberOfQuerries;i++)
    {
            j=0;
           //printf("here 1**********\n");
            initialPosition = querries[i][j]-1;// -1 cos they are 1 indexed
            finalPosition = querries[i][j+1]-1;
            newValue = querries[i][j+2];
            for(j=initialPosition;j<=finalPosition;j++)
            {
                arr[j] = arr[j]+newValue;
            }


            /*for (int i = 0; i < sizeOfArray; i++)
                cout <<  arr[i] << " ";*/
    }
    /*for (int i = 0; i < sizeOfArray; i++)
        cout << ' ' << arr[i]; cout << '\n';*/

    maxElement = max_element(arr,arr+sizeOfArray);
    printf("%d",*maxElement);

    return 0;
}
