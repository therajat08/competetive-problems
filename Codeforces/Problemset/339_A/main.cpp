//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>

#define loop(i,a,b) for (int i = a; i < b; i++)

#define printVeci(v) for(int i = 0; i < v.size(); i++) {cout << v[i] << endl;} 

#define si(a) scanf("%d", &a)
#define sii(a,b) scanf("%d %d", &a, &b)
#define siii(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a,b) scanf("%lld %lld", &a, &b)



using namespace std;

typedef vector<int> vi;
typedef long long ll;
int main()
{
	string s;
	cin >> s;
	int oneCount=0;
	int twoCount=0;
	int threeCount=0;
	
	int size = s.length();
	string previous="0";
	for(int i=0; i<size;i++)
	{
		if(s[i]=='1')
		{
			oneCount++;
		}
		else if(s[i]=='2')
		{
			twoCount++;
		}
		else if(s[i]=='3')
		{
			threeCount++;
		}
	}
	int plusCount=size-(oneCount+twoCount+threeCount);
		loop(i,0,oneCount)	
		{
			cout << "1";
			if(plusCount>0)
			{
				cout << "+";
				plusCount--;
			}
		}
		
		loop(i,0,twoCount)	
		{
			cout << "2"; 
			if(plusCount>0)
			{
				cout << "+";
				plusCount--;
			}
		}
		loop(i,0,threeCount)	
		{
			cout << "3"; 
			if(plusCount>0)
			{
				cout << "+";
				plusCount--;
			}
		}
	// cout << oneCount<<" " << twoCount <<" "<< threeCount;
	return 0;
}
