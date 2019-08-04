
#include <bits/stdc++.h>

using namespace std;

void printVector(vector<long> vect)
{

        for(int i=0;i<vect.size();i++)
        {

                   printf("%d ",vect.at(i));
        }
            //printf("\n");
}




int main()
{
        long sizeOfVector;
        long numberOfSwaps;
        vector<long> vect;
        long i,j;
        long maximum;
        vector<long>::iterator it;

        cin >> sizeOfVector;
        cin >> numberOfSwaps;

        for(i=0;i<sizeOfVector;i++)
        {
            cin >> j;
            vect.push_back(j);
        }

        for(i=0;i<numberOfSwaps;i++)
        {
            maximum = *max_element(vect.begin()+i,vect.end());
            it = find (vect.begin()+i, vect.end(), maximum);
            //cout << "max position" << maximum << " " << it - vect.begin();
            if(it-vect.begin()!=i)
            {
                swap(vect.at(it-vect.begin()),vect.at(i));
            }
        }
        printVector(vect);

        return 0;
}


