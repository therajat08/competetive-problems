#include <bits/stdc++.h>

using namespace std;

//vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int rotationStorage;
    int vectSize = a.size();
    int i,j;

     /*for(i=0;i<vectSize;i++)
    {
         cout << a.at(i)  <<endl;
    }*/

    for(j=1; j<=d;j++)
    {
        rotationStorage = a[0];
        for(i=0;i<vectSize-1;i++)
        {

                a[i] = a[i+1];


        }
        a[vectSize-1] = rotationStorage;
        for(i=0;i<vectSize;i++)
        {
         cout << a.at(i) << " ";

        }
        printf("\n");

    }
    return a;

}

int main()
{
    int numberOfRotations;
    int vectorSize;
    int i,j;
    vector<int> a;
    vector<int> result;

    cin >> vectorSize;
    cin >> numberOfRotations;

    for(i=0;i<vectorSize;i++)
    {
         cin >> j;
         a.push_back(j);
    }
   result = rotLeft(a,numberOfRotations);

   /*for(i=0;i<vectorSize;i++)
    {
         cout << result.at(i)  <<endl;
    }*/

    return 0;
}

