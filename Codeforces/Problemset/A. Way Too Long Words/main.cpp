#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string s;
    cin >> i;
    while (i>0)
    {
        cin >> s;
        if(s.length()<=10)
        {
            cout << s << endl;
        }
        else
        {
            cout <<s[0] << s.length()-2 << s[s.length()-1] <<endl;
        }
        
     i--;
    }
    
    return 0;
}