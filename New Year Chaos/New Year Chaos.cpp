#include <bits/stdc++.h>

using namespace std;



// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {

    int i;
    int bribeCount=0;
    int flag;//flag=0 means too chaotic and printing bribe wont be done

    for(i=0;i<q.size();i++)
    {
        cout << q.at(i);
        printf("\n");
    }
    printf("\n******end of a queue************\n");

    for(i=0;i<q.size();i++)
    {
        flag=1;
        if((q[i] - (i+1)) > 0)//testing if person is getting ahead in line(+ve difference)
        {
            if((q[i] - (i+1)) > 2)//testing if it is more than 2 i.e chaotic
            {
                printf("Too chaotic");
                flag=0;
                break;
            }
            else
            {
                bribeCount+= (q[i] - (i+1));
            }
        }
    }
    if(flag!=0)
    {
            printf("%d",bribeCount);
    }


}

int main()
{
    int numberOfQueries=0;
    int vectSize=0;
    int j,i,k;
    vector<int> vect;

    cin >> numberOfQueries;

    for(i=0;i<numberOfQueries;i++)
    {
        cin >> vectSize;
            for(j=0;j<vectSize;j++)
            {
               cin >> k;
                vect.push_back(k);
            }
        minimumBribes(vect);
        vect.clear();//to reset out vector containing queue sequence
    }


    return 0;
}

