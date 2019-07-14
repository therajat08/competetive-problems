#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numCount=0,i,j=0;
    int querryCount=0;
    vector<int>::iterator querryPosition;
    vector<int> vect;
    vector<int> querryContainer;
    cin >> numCount;

    for(i=0;i<numCount;i++)
    {
        cin >> j;
        vect.push_back(j);
    }

    cin >> querryCount;

    for(i=0,j=0;i<querryCount;i++)
    {
        cin >> j;
        querryContainer.push_back(j);
    }

    //output from below

    for(i=0;i<querryContainer.size();i++)
    {
        querryPosition = lower_bound(vect.begin(),vect.end(),querryContainer.at(i));
        //cout << querryPosition-vect.begin();
       if(querryContainer.at(i) == vect.at(  (querryPosition-vect.begin())-1 ) )
           {
               cout << "Yes " << querryPosition-vect.begin()<<endl;
           }
        else
            {

                cout << "No " << (querryPosition-vect.begin())+2<<endl;
            }

    }

    return 0;
}

