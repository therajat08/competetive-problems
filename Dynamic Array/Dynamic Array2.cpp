#include <bits/stdc++.h>

using namespace std;

int main(){

    long lastAnswer = 0;
    long numberOfSequences = 0;
    long numberOfQuerries=0;
    long i;
    long typeOfQuerry,x,y; // a querry parts
    int index,flag=2;
    vector<vector<int> > vect;
    vector<int>::iterator it;
    vector<int> rowCreated;


    cin >> numberOfSequences;
    cin >> numberOfQuerries;

    for(i=0;i<numberOfQuerries;i++)
    {
        cin >> typeOfQuerry;
        cin >> x;
        cin >> y;
        //printf("here 3********");
        //printf("%d",(x^lastAnswer)%numberOfSequences);
        //printf("here 4********");
        index = (x^lastAnswer)%numberOfSequences;
        it = find (rowCreated.begin(), rowCreated.end(), index);
        if (it == rowCreated.end())
       {
            vect.push_back(vector<int>());
       }

        //printf("here 5********");
        /*if(index == 0 && rowCreated>0)
        {
            if(flag!=1)
                {

                    flag = 1;
                    vect.push_back(vector<int>());
                    rowCreated--;
                }

        }
        else if(index == 1 && rowCreated>0)
        {
            if(flag!=0)
            {
                flag = 0;
                vect.push_back(vector<int>());
                rowCreated--;
            }
        }*/



        if(typeOfQuerry==1)
        {

            //printf("here 1********");
            vect[index].push_back(y);
            //printf("here 2********");
        }
        else if(typeOfQuerry==2)
        {

            vect[index].push_back(y);
            lastAnswer = vect[(x ^ lastAnswer)%numberOfSequences][y];
            printf("%d\n",lastAnswer);
        }
    }//end of main
    return 0;
}
