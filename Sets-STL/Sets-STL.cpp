#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int numberOfQuerries;
    int type,x,y;
    vector<vector<int> > vect;

    set<int> firstEverSet;
    set<int>::iterator it;

    cin >> numberOfQuerries;

    for(int i=0;i<numberOfQuerries;i++)
    {
        cin >> type;
        cin >> x;


        if(type==1)
        {
            firstEverSet.insert(x);
        }
        else if(type==2)
        {
            firstEverSet.erase(x);
        }
        else if(type==3)
        {
            it = firstEverSet.find(x);
            if(it!=firstEverSet.end())
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
    }

    return 0;
}



