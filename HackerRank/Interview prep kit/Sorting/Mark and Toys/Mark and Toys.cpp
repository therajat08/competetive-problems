#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[],int s);
void quickSort(int arr[],int low, int up);
int pivotPosition(int arr[],int low, int up);

int main()
{
    int numberOfToys;
    int amountToSpend;
    int toyCount=0;
    int i,j;

    cin >> numberOfToys;
    cin >> amountToSpend;

    int *arr = new int[numberOfToys];

    for(i=0;i<numberOfToys;i++)
    {
        cin >> arr[i];
    }

    //printArray(arr,numberOfToys);
    //printf("\n");
    quickSort(arr,0,numberOfToys-1);
    //cout << endl <<"Sorted ";
    //printArray(arr,numberOfToys);

    for(i=0;i<numberOfToys;i++)
    {
        amountToSpend = amountToSpend - arr[i];
        //cout << amountToSpend << " ";
        if(amountToSpend<0)
        {
            break;
        }
        toyCount++;
         //cout << "toycunt "<< toyCount<< " ";
    }

    cout << toyCount;

    return 0;
}
void printArray(int arr[],int s)
{
    int i;
    printf("\n******************************\n");
    for(i=0;i<s;i++)
    {
        cout << arr[i] << " " ;
    }
    printf("\n******************************\n");
}

void quickSort(int arr[], int low, int up)
{
    //printArray(arr,7);
    int pivot;
    if(low>=up)
    {
        return;
    }
    pivot = pivotPosition(arr,low,up);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,up);
}
int pivotPosition(int arr[],int low, int up)
{
    int i,j,pivot;
    int temp;
    i = low+1;
    j = up;
    pivot = arr[low];

    while(i<=j)
    {
        while(arr[i]<pivot && i<up)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<j)
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j] = temp;
            j--;
            i++;
        }
        else
        {
            i++;
        }
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
}
