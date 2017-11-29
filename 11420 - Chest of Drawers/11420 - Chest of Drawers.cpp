/**
     Programmer Name: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge: UVa OJ
     Problem name: 11420 - Chest of Drawers
     Imp. Algorithm: Recursive DP
**/
using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define mxn 70

typedef long long ll;
ll dp[mxn][mxn][2];
int N, K, drawers[mxn] = {1};

ll rec_dp(int indx, int tot, int state)
{
    if(dp[indx][tot][state] != -1) return dp[indx][tot][state];
    if(indx == N + 1)
    {
        if(tot == K) return 1;
        else return 0;
    }
    ll ans = 0;
    drawers[indx] = 1;
    ans = ans + rec_dp(indx + 1, tot + (drawers[indx - 1] == 1), 1);
    drawers[indx] = 0;
    ans = ans + rec_dp(indx + 1, tot, 0);

    return dp[indx][tot][state] = ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("CD.txt", "r", stdin);
#endif // ONLINE_JUDGE
    while(sf("%d %d", &N, &K))
    {
        memset(dp, -1, sizeof dp);
        if(N < 0 && K < 0) return 0;
        pf("%lld\n", rec_dp(1, 0, 1));
    }
    return 0;
}
