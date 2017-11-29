using namespace std;
#include<bits/stdc++.h>

#define mxn 105
int n, t, p;
int cache[75][mxn];

int rec_dp(int k, int t)
{
    if(cache[k][t] != -1) return cache[k][t];
    if(t < 0) return 0;
    if(k == n)
    {
        if(t == 0) return 1;
        else return 0;
    }

    int ans = 0;
    for(int x = p; x <= t; x++)
    {
        ans = ans + rec_dp(k + 1, t - x);
    }
    return cache[k][t] = ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("MD.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int cnum;
    scanf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        memset(cache, -1, sizeof cache);
        scanf("%d %d %d", &n, &t, &p);
        printf("%d\n", rec_dp(0, t));
    }
    return 0;
}
