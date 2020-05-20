
#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
  int stringLength = s.length();

  long aCountString=0;//denotes number of a's in given string
  long aCount=0;
  long stringRepeat=0;//denotes number of times string is repeated in n number of characters
  int remainder;//denotes characters that doesnt form complete string at the end
  int i;
    //printf("%d",stringLength);
    //cout << s;
    //printf("%s\n",s.c_str());
    for(i=0;i<s.length();i++)
    {
        if(s[i] == 'a')
        {
            aCountString+=1;
        }
    }

    stringRepeat = n/stringLength;
    aCount+=aCountString*stringRepeat;

    remainder = n%stringLength;

    for(i=0;i<remainder;i++)
    {
        if(s[i]=='a')
        {
            aCount++;
        }
    }

    /*testing for correct number of a's in string*/
    //printf("%d",aCountString);

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
