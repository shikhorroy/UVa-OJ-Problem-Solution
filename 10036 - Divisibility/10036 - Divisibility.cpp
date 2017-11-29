/**
     Programmer Name: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge: UVa OJ
     Problem name: 10036 - Divisibility
     Imp. Algorithm: Recursive DP
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
#define mxn 10003
int iArr[mxn], N, K, dp[mxn][105];
bool rec_dp(int indx, int res)
{
//    DEBUG2(indx, res);
    if(dp[indx][res] != -1) return dp[indx][res];
    if(indx == N) return !(res % K);
    bool flag1 = rec_dp(indx + 1, (res + iArr[indx]) % K);
    if(flag1) return dp[indx][res] = true;
    return dp[indx][res] = rec_dp(indx + 1, (res - iArr[indx]) % K);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int cnum;
    sf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        memset(dp, -1, sizeof dp);
        sf("%d %d", &N, &K);
        for(int i = 0; i < N; i++) sf("%d", &iArr[i]);
        if(rec_dp(0, 0))
            puts("Divisible");
        else
            puts("Not divisible");
    }
    return 0;
}

