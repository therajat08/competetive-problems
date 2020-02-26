#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {

    int freq[26]={0};

    int i;
    string ans = "NO";

    for(i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }

    set<int> distinct;
    bool odd=0;
    for(i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            distinct.insert(freq[i]);
        }
    }
    //cout << distinct.size() << endl;
    
    set<int>::iterator itr;

    
    /*for(itr=distinct.begin();itr!=distinct.end();itr++)
    {
        cout << *itr << endl;
    }*/
    for(itr=distinct.begin();itr!=distinct.end();itr++)
    {
        if(distinct.size()==1 && (*itr)%2!=0 && s.length()>1)
        {
            ans = "NO";
            break;
        }
        if((*itr)%2!=0 && odd!=1)
        {
            odd=1;
        }
        else if((*itr)%2!=0 && odd!=0)
        {   ans = "NO";
            break;
        }
        printf("here\n");
        ans="YES";
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
