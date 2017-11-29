using namespace std;
#include<bits/stdc++.h>

#define mx 100004
int iArr[mx];

int solve(int n, int s)
{
    int i = 0, j = 0;
    int len = n + 2, sum = iArr[0];
    while(j < n)
    {
        if(sum >= s) len = min(len, j - i + 1);
        if(sum >= s && i < j)
        {
            sum = sum - iArr[i];
            i = i + 1;
        }
        else
        {
            j = j + 1;
            sum = sum + iArr[j];
        }
    }
    if(len == n + 2) len = 0;
    printf("%d\n", len);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("subs.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int n, s;
    while(scanf("%d %d", &n, &s) == 2)
    {
        for(int i = 0; i < n; ++i)
            scanf("%d", &iArr[i]);
        solve(n, s);
    }
    return 0;
}
