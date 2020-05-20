#include <iostream>
using namespace std;
int main()
{
    int i;
    cin >> i;
    //cout << i;
    if(i%2==0)
    {   if(i==2)
        {
            printf("NO");
            return 0;
        }
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}