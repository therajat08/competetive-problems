#include <bits/stdc++.h>
#define veci vector<int>
#define loop(a,b) for (int i = a; i < b; i++)
#define printVeci(v) for(int i = 0; i < v.size(); i++) {cout << v[i] << endl;} 
using namespace std;

int main()
{
    int cases;

    cin >> cases;

    while (cases--)
    {
      int sizex,sizey,deadx,deady;
      cin >> sizex >> sizey >> deadx >> deady;
      deadx+=1;
      deady+=1;
      int maxx,maxy;
      maxx = max(sizex*abs(deady-1),sizex*abs(sizey-deady));
      maxy = max(sizey*abs(deadx-1),sizey*abs(sizex-deadx));
      cout << max(maxx,maxy) << endl;
    }
    
    return 0;
}
