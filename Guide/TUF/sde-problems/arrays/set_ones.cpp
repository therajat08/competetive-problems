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

#define r 3
#define c 3

using namespace std;

typedef vector<int> vi;
typedef long long ll;

void print(int ar[r][c])
{
	loop(i,0,r)
	{
		loop(j,0,c)
		{
			cout << ar[i][j] << " ";
		}
		printf("\n");
	}
}

void doit(int ar[r][c])
{
	bool firstRow = false;
	bool firstColumn = false;

	loop(i,0,r)
	{
		loop(j,0,c)
		{
			if(ar[0][j]==1)
			{
				firstRow = true;
			}
			if(ar[i][0]==1)
			{
				firstColumn = true;
			}

			if(ar[i][j]==1)
			{
				ar[0][j] = 1;
				ar[i][0] = 1;
			}

		}
	}

	loop(i,1,r)
	{
		loop(j,1,c)
		{
			if(ar[0][j]==1 || ar[i][0]==1)
			{
				ar[i][j] = 1;
			}
		}
	}

	if (firstRow) {
		for (int i = 0; i < c; ++i) {
			ar[0][i] = 1;	
		}	
	}
	if (firstColumn) {
		for (int i = 0; i < r; ++i) {
			ar[i][0] = 1;	
		}	
	}

}
int main()
{
		
	int mat[r][c] = {
		{1,0,0},
		{0,0,0},
		{0,0,0}
	}; 

	print(mat);
	
	printf("new array \n");
	doit(mat);

	print(mat);

    return 0;
}
