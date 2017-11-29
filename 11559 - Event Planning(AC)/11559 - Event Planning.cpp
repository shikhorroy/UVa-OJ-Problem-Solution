#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;
#define ll long long int
#define FOR(s,e) for(int i = s; i <= e; i++)
#define sf scanf
#define pf printf
#define INFINITY 10000000
int main()
{
    ll N, B, H, W, p, a;
    while(sf("%lld %lld %lld %lld",&N,&B,&H,&W) != EOF)
    {
        ll MIN = INFINITY;
        while(H--)
        {
            sf("%lld",&p);
            ll total_cost = (N * p);
            if(total_cost > B)
            {
                for(ll i = 0 ; i< W; i++)
                    sf("%*lld");
            }
            else
            {
                ll flag = 0;
                for(ll i = 0 ; i< W; i++)
                {
                    if(flag)
                    {
                        sf("%*lld");
                        continue;
                    }
                    sf("%lld",&a);
                    if(a >= N)
                    {
                        if(MIN > total_cost)
                            MIN = total_cost;
                        flag = 1;
                    }
                }
            }
        }
        if(MIN == INFINITY) pf("stay home\n");
        else    pf("%lld\n",MIN);
    }
    return 0;
}
