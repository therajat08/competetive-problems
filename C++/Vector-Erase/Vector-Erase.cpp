#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int vectorSize=0,i,j=0;
    int singleErase;
    vector<int> vect;
    vector<int> range;
    cin >> vectorSize;

    for(i=0;i<vectorSize;++i)
    {
        cin >> j;
        vect.push_back(j);
    }

    cin >> singleErase;

    for(i=0;i<2;i++)
    {
        cin >> j;
        range.push_back(j);
    }

    vect.erase(vect.begin()+(singleErase-1));

    vect.erase(vect.begin()+(range.at(0)-1) , vect.begin()+(range.at(1)-1)  );

    cout << vect.size() << endl;
    for(i=0;  i<vect.size(); i++)
    {
        printf("%d ",vect.at(i));
    }

    /*for(i=0;i<vectorSize;++i)
    {
        cout << vect.at(i);

    }*/
    return 0;
}

