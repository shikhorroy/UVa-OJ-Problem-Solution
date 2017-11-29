using namespace std;
#include<bits/stdc++.h>

#define mxn 105
#define MOD 1000000
int dp[mxn][mxn], K, N;
int rec_dp(int k, int n)
{
    if(k == K)
    {
        if(n == 0) return 1;
        else return 0;
    }
    if(n < 0 || k > K) return 0;
    if(dp[k][n] != -1) return dp[k][n];
    int ans = 0;
    for(int i = 0; i <= n; i++)
    {
        ans = (ans + rec_dp(k + 1, n - i)) % MOD;
    }
    return dp[k][n] = ans % MOD;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("HDYA.txt", "r", stdin);
#endif // ONLINE_JUDGE
    while(scanf("%d %d", &N, &K) == 2)
    {
        memset(dp, -1, sizeof dp);
        if(N == 0 && K == 0) return 0;
        printf("%d\n", rec_dp(0, N));
    }
    return 0;
}
