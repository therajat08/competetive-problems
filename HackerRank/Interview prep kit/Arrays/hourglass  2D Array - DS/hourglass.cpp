#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int> > arr) {
    int i,j;
    int k=0,l=0;
    int positionInGlass=0;//position 4 and 6 will be ignored
    int sum=0;
    int sumArray[16],sumArrayIndex=0;


    for(i=0 ; i<4;i++)
    {
        for(j=0; j<4 ;j++)
        {
            for(k = i;k<=i+2;k++)
               {
                   for(l=j; l<=j+2  ;  l++)
                   {
                       positionInGlass++;

                       if(positionInGlass!=4 && positionInGlass!=6)
                       {
                           sum+= arr[k][l];

                       }
                        //printf("[%d][%d]\n",k,l);
                   }

               }
            sumArray[sumArrayIndex] = sum;
            //printf("%d",sum);
            sum=0;
            sumArrayIndex++;
            positionInGlass=0;
            //printf("**************end of a glass*****************");
            //printf("******************hour glass index[%d][%d]\n",i,j);

        }

    }
   /* for(i=0;i<16;i++)
    {
        printf("\n[%d ] : %d",i,sumArray[i]);
    }*/
    int* max =max_element(sumArray,sumArray+16);
   //printf("max is %d",*max);
    return *max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
