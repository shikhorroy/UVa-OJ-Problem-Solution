#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int64 long long
#define MAX 20000000
#define limit 100000
int64 primes[MAX];
int64 twinP[limit+1][2];
void sieve()
{
    int64 x = sqrt(MAX);
    for(int64 i = 4; i <= MAX; i+=2)   primes[i] = 1;
    for(int64 i = 3; i <= x; i+=2)
    {
        if(primes[i] == 0)
            for(int64 j = i+i; j <= MAX; j+=i)
            {
                primes[j] = 1;
            }
    }
}
void twin_primes()
{
    int x = 1, j, k = 0;
    for(int64 i = 2; i <= MAX; i++ )
    {
        if(primes[i] == 0)
        {
            if((i - x) == 2)
            {
                j = ++k;
                twinP[j][0] = x;
                twinP[j][1] = i;
            }
            x = i;
        }
    }
}
int main()
{
    sieve();
    twin_primes();
    int64 n;
    while(scanf("%lld",&n) != EOF)
    {
        printf("(%lld, %lld)\n",twinP[n][0],twinP[n][1]);
    }
    return 0;
}
