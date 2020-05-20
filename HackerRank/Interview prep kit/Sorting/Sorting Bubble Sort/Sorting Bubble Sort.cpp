#include <bits/stdc++.h>

using namespace std;

int main()
{

    int sizeOfArray;

    int *arr = new int[sizeOfArray];

    int i,j;
    int swapCount=0;

    cin >> sizeOfArray;

    for(i=0;i<sizeOfArray;i++)
    {
        cin >> arr[i];
    }
   /* for(i=0;i<sizeOfArray;i++)
    {
        cout << arr[i] << " ";
    }*/

    for (i = 0; i < sizeOfArray; i++) {

        for (j = 0; j < sizeOfArray - 1; j++)
            {
        // Swap adjacent elements if they are in decreasing order
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapCount++;
                }
            }

    }
    cout << "Array is sorted in " << swapCount <<  " swaps." << endl;
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[sizeOfArray-1] << endl;

    return 0;
}
