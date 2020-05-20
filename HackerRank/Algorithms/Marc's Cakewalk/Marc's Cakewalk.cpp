#include <bits/stdc++.h>

using namespace std;

int main()
{
        int sizezOfVector;
        vector<int> cakeCalorie;
        int i,j;
        long miles=0;
        cin >> sizezOfVector;

        for(i=0;i<sizezOfVector;i++)
        {
            cin >> j;
            cakeCalorie.push_back(j);
        }

        sort(cakeCalorie.begin(),cakeCalorie.end());

        for(i=0,j=sizezOfVector-1;i<sizezOfVector;i++,j--)
        {
            miles+=pow(2,i)*cakeCalorie[j];
        }
        cout << miles;
        return 0;
}


