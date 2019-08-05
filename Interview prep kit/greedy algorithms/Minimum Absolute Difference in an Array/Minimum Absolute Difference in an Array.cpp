#include <bits/stdc++.h>

using namespace std;

int main()
{
        int sizeOfVector;
        int i,j;
        int result = INT_MAX;
        vector<int> vect;
        cin >> sizeOfVector;

        for(i=0;i<sizeOfVector;i++)
        {
            cin >> j;
            vect.push_back(j);
        }

        sort(vect.begin(),vect.end());


        for(i=0;i<=sizeOfVector-2;i++)
        {
            result=min(result,abs(vect[i+1]-vect[i]));
        }
        cout << result;
        return 0;
}



