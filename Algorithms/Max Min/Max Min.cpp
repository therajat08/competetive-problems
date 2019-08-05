#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> vect)
{

        for(int i=0;i<vect.size();i++)
        {

                    printf("%d ",vect.at(i));
        }
            printf("\n");
}

int main()
{
        int numberOfItems;
        int rangeOfItems;
        vector<int> items;
        int i,j;

        int result = INT_MAX;
        cin >> numberOfItems;
        cin >> rangeOfItems;

        for(i=0;i<numberOfItems;i++)
        {
            cin >> j;
            items.push_back(j);
        }

        sort(items.begin(),items.end());

       //printVector(items);

        for(i=0;i<=numberOfItems-rangeOfItems;i++)
        {
            result = min(result,items[i+rangeOfItems-1]-items[i]);
            //cout <<items[i+rangeOfItems-1]<< " "<< items[i]<<" "<<result << endl;

        }
        cout << result;

        return 0;
}


