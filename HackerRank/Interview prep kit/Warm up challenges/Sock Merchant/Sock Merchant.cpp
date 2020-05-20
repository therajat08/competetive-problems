#include <bits/stdc++.h>

using namespace std;



int main(){

    vector<int> vect;
    int vectorSize=0;
    int i,j,k;
    int pairCounter=0;
    cin >> vectorSize;

   // cout << vectorSize;

   for(i=0,j=0;i<vectorSize;i++)
   {
       cin >> j;
       vect.push_back(j);
   }
   i=0;
   j=1;
    while(vect.size()>1)
    {
      if(j==vect.size())
      {
          vect.erase(vect.begin()+0);
          j=1;
          continue;
      }

      if(vect.at(j) == vect.at(i))
      {
          pairCounter++;
          vect.erase(vect.begin()+j);
          vect.erase(vect.begin()+0);
          j=1;
          continue;
      }

    /*for(k=0;k<vect.size();k++)
    {
        printf("%d ",vect.at(k));
    }
    printf("\n************************************************************%d j: %d\n",pairCounter,j);
    */
      j++;

    }//end of while

    cout << pairCounter;

    return 0;
}



