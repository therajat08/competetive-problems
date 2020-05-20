#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
//#include <boost/algorithm/string.hpp>
//#include <bits/stdc++.h>
using namespace std;
string vowelRemove(string s)
{
    vector<char> vowels = {'a','e','i','o','u'};
    for(int i=0;i<s.length();i++)
    {
        if(find(vowels.begin(),vowels.end(),s[i])!=vowels.end())
        {
            s.replace(i,1,"");
            i=i-1;
        }
    }
    return s;
}
int main()
{
    string s,temp;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower); 
    temp =  vowelRemove(s);
    for(int i=0;i<temp.length();i++)
    {   
        if(temp[i]=='y')
        {
            continue;
        }
        cout << "." << temp[i]; 
    }
    return 0;
}