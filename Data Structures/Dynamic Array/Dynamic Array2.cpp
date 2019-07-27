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
        printf("here 3********\n");
        printf("index: %d\n",(x^lastAnswer)%numberOfSequences);
        printf("here 4********\n");
        index = (x^lastAnswer)%numberOfSequences;
        it = find (rowCreated.begin(), rowCreated.end(), index);
        if (it == rowCreated.end())
       {
            vect.push_back(vector<int>());
       }

        printf("here 5********\n");




        if(typeOfQuerry==1)
        {

            printf("here 1********\n");
            vect[index].push_back(y);
            printf("here 2********\n");
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
