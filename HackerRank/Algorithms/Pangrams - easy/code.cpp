#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {

    transform(s.begin(),s.end(),s.begin(),::tolower);
    //cout << s;

    int freq[26] = {0};
    int i;
    for(i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }

    set<int> distinct;

    for(i=0;i<26;i++)
    {
        if(freq[i]==0)
        {
            return "not pangram";
        }
        else if(freq[i]!=0)
        {
            distinct.insert(freq[i]);
        }
    }
    if(distinct.size()>1)
    {
        return "pangram";
    }
    else
    {
        return "not pangram";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

