
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
void swapit(int ar[], int i, int j);
void reverse(int ar[], int i, int s);

int main()
 {
     int cases;

     si(cases);

     while(cases--)
     {
         int n;
         cin >> n;

         vector<int> v(n);

         for(int i = 0; i<n; ++i)
         {
             scanf("%d", &v[i]);
         }
          vector<int> aux;
            aux =v;

            next_permutation(v.begin(),v.end());
            if(v==aux)
            {
                sort(v.begin(),v.end());

            }
            for(int i=0; i<n; ++i)
            {
                printf("%d", v[i]);
                if(i == n-1)
                    printf("\n");
                else
                {
                    printf(" ");
                }
                
            }
     }@un
	return 0;
}