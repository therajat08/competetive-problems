#include <bits/stdc++.h>

using namespace std;



// Complete the minimumSwaps function below.
int main() {

    int sizeOfVector;
    int swapCount=0;
    int i,y;

    vector<int> sortThis;
    vector<int>::iterator it; //to find position of a value in vector

    cin >> sizeOfVector;

    for( i=0,y; i<sizeOfVector;i++)
    {
        cin >> y;
        sortThis.push_back(y);

    }

    for(i=sizeOfVector-1,y=sizeOfVector;
        i>=0;
        i--,y--)
    {
        it = find(sortThis.begin(), sortThis.end(), y);
        if(sortThis[i]!=y)
        {
            //swapping
            sortThis[it - sortThis.begin() ] = sortThis[i];//it - sortThis.begin() + 1 -> j's position in vector
            sortThis[i] = y;
            //temp=sortThis[i];
            //sortThis[i]=j;
            //sortThis[it - sortThis.begin() + 1]
            swapCount++;
            /*printf("\n*****vector now********\n");
            for(int p=0;p<sizeOfVector;p++)//for debugging
            {
                printf("%d\n",sortThis.at(p));
            }
            printf("****swapcount: %d \n",swapCount);
            printf("\n*****vector end********\n");
            */
        }
    }
    printf("%d",swapCount);
    return 0;

}
