#include <bits/stdc++.h>

using namespace std;

int main(){

    int lastAnswer = 0;
    int numberOfSequences = 0;
    int numberOfQuerries=0;
    int i;
    int typeOfQuerry,x,y; // a querry parts
    int index;
    vector<vector<int> > vect;


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
        //items.push_back(vector<int>());
        if(typeOfQuerry==1)
        {
            vect.push_back(vector<int>());
            //printf("here 1********");
            vect[index].push_back(y);
            //printf("here 2********");
        }
        else if(typeOfQuerry==2)
        {
            vect.push_back(vector<int>());
            vect[index].push_back(y);
            lastAnswer = vect[(x ^ lastAnswer)%numberOfSequences][y];
            printf("%d\n",lastAnswer);
        }
    }//end of main
    return 0;
}
