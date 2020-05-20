#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    int cubes;
    cin >> cubes;
    vector<ll> cubeNum;

    ll temp;
    for(int i=0;i<cubes;i++)
    {
        cin >> temp;
        cubeNum.push_back(temp);
    }
            
    for (int i = 0; i <= ceil(cubes/2); i++)
    {
        if(i&1)
        {
            continue;
        }
        else
        {
            if(i == ceil(cubes/2))
            {
                continue;
            }
            cubeNum[i] ^=  cubeNum[cubes-i-1];  
            cubeNum[cubes-i-1] ^=  cubeNum[i];  
            cubeNum[i] ^=  cubeNum[cubes-i-1];  
        }
    }    
    /*for (int p = 0; p < cubes; p++)
    {
       cout << cubeNum[p] << " ";
    }
    cout << endl;
    }*/



    for (int i = 0; i < cubes; i++)
    {
       cout << cubeNum[i] << " ";
    }
        

    return 0;
}