#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {

    int freqS1[26]={0};
    int freqS2[26]={0};
    int deleteCount=0;
    for(int i=0;i<s1.length();i++)
    {
        freqS1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++)
    {
        freqS2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(abs(freqS1[i]-freqS2[i])>0)
        {
            deleteCount+=abs(freqS1[i]-freqS2[i]);
        }
    }

    return deleteCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
