using namespace std;
#include<bits/stdc++.h>

#define szn 105
#define mxn 10003

int calVal[szn], cache[mxn];
void pre_calculation()
{
    for(int n = 1; n <= 101; n++)
        calVal[n] = n * n;
}
int find_ans(int num)
{
    if(cache[num] != -1) return cache[num];
    if(num < 0) return (mxn + 10);
    if(num == 0) return 0;

    int ans = INT_MAX;
    for(int n = 1; n * n <= num; n++)
        ans = min(ans, 1 + find_ans(num - calVal[n]));
    return cache[num] = ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("11407.txt", "r", stdin);
#endif // ONLINE_JUDGE
    pre_calculation();
    int cnum, n; scanf("%d", &cnum);
    memset(cache, -1, sizeof cache);
    for(int cs = 1; cs <= cnum; cs++)
    {
        scanf("%d", &n);
        printf("%d\n", find_ans(n));
    }
    return 0;
}
