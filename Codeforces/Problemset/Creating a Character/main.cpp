#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int queries;

    vector<int> strength;
    vector<int> inteli;
    vector<int> exp;
    int temp;
    for (int i = 0; i < queries; i++)
    {
        cin >> temp;
        strength.push_back(temp);
        cin >> temp;
        inteli.push_back(temp);
        cin >> temp;
        exp.push_back(temp);

    }
    
    int xpNow;
    int ans=0;
    for (int i = 0; i < queries; i++)
    {
        xpNow = exp[i];
        while (1)
        {
         temp = rand()% 1 + exp[i];
         if(strength[i]+temp>inteli[i]+(xpNow-1)) 
            {
                ans++;
            }
        }
        
    }
    

    return 0;
}