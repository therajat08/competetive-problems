#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool plus=true;
    if(n>=0)
    {
        plus = true;
    }
    else
    {
        plus = false;
        n = n*-1;
    }

    int endZeros=0,temp=n;
    while (temp>0)
    {
        if(temp%10==0)
        {
            endZeros++;
        }
        else
        {
            break;
        }
        
        temp/=10;
    }
    if(plus==true)
    {
        printf("p");
    }
    else
    {
        printf("n");
    }
    if(n==0)
    {
        printf("z");
    }
    else
    {
        string s= to_string(n);
        reverse(s.begin(),s.end()) ; // as we will extract number from right end
        n=0;
        n=stoi(s); //now s converted 

            temp=0;
        
        while (n>0)
        {   temp = n%10;
            if(temp==0)
            {
                printf("z");
            }
            else if(temp%2==0)
            {
                printf("e");
            }
            else
            {
                printf("o");
            }
            n= n/10;
        }
        while (endZeros>0)
        {
            printf("z");
            endZeros--;
        }
    }
    return 0;
}