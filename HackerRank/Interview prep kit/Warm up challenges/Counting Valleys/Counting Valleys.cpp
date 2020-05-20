
#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int i;
    //int up=0,down=0;
    int level=0;
    int valleyCount=0;
    int flag=0; //flag=0 means it in ground state
    for(i=0;i<s.length();i++)
    {
        if(level>0)
        {
            flag = -1;
        }
        else if(level <0)
        {
            flag = 1;
        }


        if(s[i]=='U' )
        {
            level++;
        }
        else if(s[i]=='D' )
        {
            level--;
        }

        if(level == 0 && flag == 1)
        {
            valleyCount++;
        }
    }

    return valleyCount;
}


int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;
    printf("%d",countingValleys(n,s));
    return 0;
}
