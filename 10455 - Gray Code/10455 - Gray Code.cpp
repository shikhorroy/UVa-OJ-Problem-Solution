/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge:
     Problem name: 11173 - Gray Codes
     Imp. Algorithm: Gray Code Generation formula (Wiki: Gray Code). ;)
**/
using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

#define DEBUG1(x) pf("> %s: %d\n", #x, x)
#define DEBUG2(x, y) pf("> %s: %d > %s: %d\n", #x, x, #y, y)
#define DEBUG3(x, y, z) pf("> %s: %d > %s: %d > %s: %d\n", #x, x, #y, y, #z, z)

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("E.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int cnum, n, k; sf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        sf("%d %d", &n, &k);
        pf("%d\n", (k ^ (k >> 1)));
    }
    return 0;
}
