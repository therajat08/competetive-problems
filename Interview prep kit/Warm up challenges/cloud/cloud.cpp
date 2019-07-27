#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int i;
    int currentPosition=0;
    int safeJump=0;
    int jumpCount=0;



    while(currentPosition<c.size())
    {

        for(i=currentPosition+1;i<=c.size();i++)
        {
            if(c.at(i)==0 && safeJump!=2)
            {
                safeJump++;
            }
            else if (c.at(i)==1) {
                currentPosition+=safeJump;
                jumpCount+=safeJump;
                break;
            }
            else if (safeJump==2) {
                currentPosition+=safeJump;
                jumpCount+=safeJump;
                break;
            }
        }

    }

    return jumpCount;

}
int main(){
    vector<int> vect;
    int push,n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {   cin >> push;
        vect.push_back(push);
    }
    jumpingOnClouds(vect);
    return 0;
}
