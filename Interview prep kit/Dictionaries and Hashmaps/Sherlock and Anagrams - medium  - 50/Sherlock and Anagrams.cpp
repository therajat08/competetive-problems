#include <bits/stdc++.h>

using namespace std;
map<string,int> m;
// Complete the sherlockAndAnagrams function below.
int main()
{
    int n;
    long long ans=0;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        m.clear();
        ans=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=1;i+j-1<s.length();j++)
            {
                string sub;
                sub = s.substr(i,j);
                sort(sub.begin(),sub.end());
                m[sub]++;
            }
        }
        map<string,int> :: iterator it;

        for(it=m.begin();it!=m.end();++it)
        {
            ans+= it->second*(it->second -1)/2;
        }
        cout << ans<<endl;

    }
    return 0;
}
