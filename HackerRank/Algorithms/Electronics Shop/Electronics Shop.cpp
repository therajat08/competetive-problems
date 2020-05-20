
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
    int budget;
    int numberOfKeyboards;
    int numberOfUsb;
    int i;
    int low,up;
    int maxSpent=0;
    //int flag = 0;


    cin >> budget;
    cin >> numberOfKeyboards;
    cin >> numberOfUsb;

    int *keyboards = new int[numberOfKeyboards];
    int *usbs = new int[numberOfUsb];

    for(i=0;i<numberOfKeyboards;i++)
    {
        cin >> keyboards[i];

    }
    //printArray(keyboards,numberOfKeyboards);
    for(i=0;i<numberOfUsb;i++)
    {
        cin >> usbs[i];

    }
    sort(keyboards,keyboards+numberOfKeyboards);
    sort(usbs,usbs+numberOfUsb);
    //printArray(usbs,numberOfUsb);

    low = 0;
    up = numberOfUsb-1;

    while(low < numberOfKeyboards && up >=0)
    {
        if((keyboards[low]+usbs[up])<=budget)
        {

            if(maxSpent<=(keyboards[low]+usbs[up]))
            {
                maxSpent = (keyboards[low]+usbs[up]);
                //cout << maxSpent << "max spent" << endl;
            }
        }

        if((keyboards[low]+usbs[up])>budget)
        {
            up--;
        }
        else
        {
            low++;
        }


    }
    if(maxSpent!=0)
        cout << maxSpent;
    else
        cout << "-1";

    return 0;
}

