#include <bits/stdc++.h>


using namespace std;

int main()
{
    int cases;

    cin >> cases;

    int m,n;
    while(cases--)
    {
        cin >> m >> n;
        cout << (m*n + 1 )/2;
    }
    return 0;

}