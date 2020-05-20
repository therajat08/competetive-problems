#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
  int stringLength = s.length();
    //printf("%d",stringLength);
    long i,characterCount=0,aCount=0;

    for(i=0;
        characterCount<=n;
        )
        {
            if(s[i]=='a' && s.length()==1)
            {
                aCount=n;
                return aCount;
            }
            characterCount+=1;
            if(s[i]=='a')
            {
                aCount+=1;

            }
            //printf("\n\n caharacter  %c",s[i]);
            i++;

            if((i)/stringLength==1 && (i)%stringLength==0)
                {
                    i=0;
                }
            //printf("\n\n%ld ",aCount);
        }
    return aCount;

}

int main()
{
    string s;
    long n;
    cin >>  s;
    cin >>  n;

    printf("%d",repeatedString(s,n));
    return 0;
}
