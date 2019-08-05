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

        int minimum,maximum;
        cin >> numberOfItems;
        cin >> rangeOfItems;

        for(i=0;i<numberOfItems;i++)
        {
            cin >> j;
            items.push_back(j);
        }

        sort(items.begin(),items.end());

       printVector(items);

        cout << (*max_element(items.begin(),items.begin()+rangeOfItems) - *min_element(items.begin(),items.begin()+rangeOfItems));


        return 0;
}


