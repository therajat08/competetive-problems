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

#define loop(i, a, b) for (int i = a; i < b; i++)

#define printVeci(v)                   \
	for (int i = 0; i < v.size(); i++) \
	{                                  \
		cout << v[i] << endl;          \
	}
#define printAri(v, s)          \
	for (int i = 0; i < s; i++) \
	{                           \
		cout << v[i] << endl;   \
	}
#define pri(a) printf("%d\n", a);

#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d %d", &a, &b)
#define siii(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sl(a) scanf("%lld", &a)
#define sll(a, b) scanf("%lld %lld", &a, &b)

using namespace std;

typedef vector<int> vi;

//program for merging two sorted arrays

void merge(int ar1[], int ar2[], int m, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{

		int j;
		int last = ar1[m - 1];
		for (j = m - 2; ar2[i] < ar1[j] && j >= 0; j--)
		{
			ar1[j + 1] = ar1[j];
		}

		if (last > ar2[i] || j != m - 2)
		{
			ar1[j + 1] = ar2[i];
			ar2[i] = last;
		}
	}
}
int main()
{
	int ar1[] = {2, 4, 56, 78, 99};
	int ar2[] = {5, 8, 36, 88, 199};

	int m = sizeof(ar1) / sizeof(ar1[0]);
	int n = sizeof(ar2) / sizeof(ar2[0]);
	merge(ar1, ar2, m, n);

	for (int i = 0; i < m; i++)
	{
		cout << ar1[i] << " ";
	}

	for (int i = 0; i < n; i++)
	{
		cout << ar2[i] << " ";
	}
	return 0;
}
