#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1 >> s2;

    if(!s1.compare(s2))
    {
        cout << -1;
    }
    else
    {
        cout << max(s1.length(),s2.length());
    }
    
    //return(max(s1.length(),s2.length()));

    return 0;
}