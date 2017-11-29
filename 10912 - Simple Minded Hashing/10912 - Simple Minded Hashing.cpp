/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge:
     Problem name:
     Imp. Algorithm:
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

long long cache[352][27][27];

long long rec_dp(int l, int s, int x)
{
    if(s < 0 || l < 0) return 0;
    if(s == 0 && l == 0) return 1;
    if(cache[s][l][x] != -1) return cache[s][l][x];

    long long ans = 0;
    for(int i = x + 1; i <= 26; i++)
        ans = ans + rec_dp(l - 1, s - i, i);
    return cache[s][l][x] = ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("SMH.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int L, S, cs = 1;
    memset(cache, -1, sizeof cache);
    while(sf("%d %d", &L, &S))
    {
        if(!L && !S) return 0;
        printf("Case %d: ", cs++);
        if(L > 26 || S > 351) printf("0\n");
        else printf("%lld\n", rec_dp(L, S, 0));
    }
    return 0;
}
