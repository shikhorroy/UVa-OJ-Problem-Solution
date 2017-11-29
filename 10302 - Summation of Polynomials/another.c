#include<stdio.h>
#define int64 long long
#define MAX 50001
int64 store[MAX];
int main()
{
    int64 i, sum = 0;
    for(i = 1; i < MAX; i++) store[i] = (i * i* i);
    int64 n;
    while(scanf("%lld",&n) != EOF)
    {
        sum = 0;
        for(i = 1; i <= n; i++) sum += store[i];
        printf("%lld\n",sum);
    }
    return 0;
}
