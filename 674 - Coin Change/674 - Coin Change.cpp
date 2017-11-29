#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define MAX 30001
#define pf printf
#define sf scanf
#define llu unsigned long long int
llu nways[MAX];
int main()
{
    llu n,
    coins[5] = {1, 5, 10, 25, 50};
    nways[0] = 1;
    for(llu i = 0; i < 5; i ++)
    {
        llu x = coins[i];
        for(llu j = x; j < MAX; j++)
            nways[j] += nways[j - x];
    }
    while(sf("%llu",&n) != EOF)
    {
        llu x = nways[n];
        pf("%llu\n",x);
    }
    return 0;
}
