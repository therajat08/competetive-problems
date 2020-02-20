
#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> vect,vector<int> vect2)
{

        for(int i=0;i<vect.size();i++)
        {

                    printf("%d ",vect.at(i));
                    printf(" %d",vect2.at(i));
                     printf("\n");
        }

}


int main()
{

        int numberOfContests;
        int canLose;
        int i,j;
        int maxLuck=0;
        vector<int> luck;
        vector<int> importance;
        cin >> numberOfContests;
        cin >> canLose;

        for(i=0;i<numberOfContests;i++)
        {
            cin >> j;
            luck.push_back(j);
            cin >> j;
            importance.push_back(j);
        }
       // printVector(luck,importance);

       for(i=0;i<numberOfContests;i++)
       {
           if()
       }

        return 0;
}


