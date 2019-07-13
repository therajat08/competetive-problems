#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> vect) {

    int i=0,j;
    int currentPosition=0;
    int pseudoPosition=0;
    int safeState=0;
    int jumpCount=0;
    int safe=0;



    while(currentPosition < vect.size())
        {

           safeState=0;
            for(i=currentPosition,pseudoPosition = currentPosition;
                safeState<3;
                i++)
            {

                if(vect.at(i)==0)
                {
                    safe=1;
                    safeState+=1;
                }
                else
                    {
                        safe=0;
                        safeState+=1;



                    }
                pseudoPosition += 1;

            //checking for out of bounds
            if(pseudoPosition>vect.size()-1)
            {
                currentPosition = vect.size()-1;

                if(safe == 1 && safeState==2)
                {
                    jumpCount+=1;
                }

                break;
            }

            }

            if(safe==1 && safeState==3)
            {
                currentPosition+=2;
                jumpCount+=1;
            }
            else if(safe==0 && safeState==3)
            {
                currentPosition +=1;
                jumpCount+=1;
            }



           if(currentPosition == vect.size()-1)
            {
                break;
            }
            //printf("\n loop %d\n",currentPosition);


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
    printf("\n%d",jumpingOnClouds(vect));
    return 0;
}
