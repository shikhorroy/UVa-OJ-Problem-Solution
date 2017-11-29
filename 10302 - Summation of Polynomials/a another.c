#include<stdio.h>
#define int64 long long
#define MAX 50001
int64 store[MAX];
int main()
{
    int64 i, sum = 0;
    for(i = 1; i < MAX; i++) store[i] = (i * i * ( i + 1) * (i + 1))/ 4;
    int64 n;
    while(scanf("%lld",&n) != EOF)
        printf("%lld\n",store[n]);

    return 0;
}
