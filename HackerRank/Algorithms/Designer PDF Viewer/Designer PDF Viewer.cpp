#include <bits/stdc++.h>

using namespace std;

//vector<string> split_string(string);

// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word) {

    int maxHeight=0;

    int wordLength = word.length();

    int i,asciiValue;

    for(i=0;i<wordLength;i++)
    {
        asciiValue = int(word[i]);
        printf("%d\n",asciiValue);
        if(maxHeight<h.at(asciiValue-97))//finding character index by subtracting ascii value from 122
        {
            maxHeight = h.at(asciiValue-97);
        }
    }
    return (maxHeight * wordLength);
}

int main()
{
    string s;
    vector<int> heights;
    int i,y;

    for(i=0;i<26;i++)
    {
        cin >> y;
        heights.push_back(y);
    }
    cin >> s;



    printf("%d",designerPdfViewer(heights,s));
    return 0;
}

