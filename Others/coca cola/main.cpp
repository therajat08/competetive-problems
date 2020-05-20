#include <stdio.h>
#include <string.h>
#include <iostream> //for cout
#include <algorithm>
using namespace std;

struct Result
{
    Result() : output1(){};
    int output1[100];     
};

Result FindTotalShops(int input1, int input2[], int input3, int input4[])
{
    int money = 0;
    sort(input2,input2+input1);
    
    Result ans;
    int shopCount = 0;
    for (int i = 0; i < input3; i++)
    {
        money=input4[i];
        shopCount = 0;
        for (int j = 0; j < input1; j++)
        {
            if(money>=input2[j])
            {
                shopCount++;
            }       
            else
            {
                break;
            }
            ans.output1[i]=shopCount;
        }
        
    }
   return ans; 
}

int main()
{
    int input1,input3;
    cin >> input1;//num of shops

    int input2[input1];//shop rates
    for(int i=0;i<input1;i++)
    {
        cin >> input2[i];   
    }
    cin >> input3;//num of days he will buy
    int input4[input3];//money he has on different days

    for (int i = 0; i < input3; i++)
    {
        cin >> input4[i];
    }
    Result res;
    res = FindTotalShops(input1,input2,input3,input4);
    for (int i = 0; i < input3; i++)
    {
        cout << res.output1[i]<< " ";
    }
    
    return 0;
}
