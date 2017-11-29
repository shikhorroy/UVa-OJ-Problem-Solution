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
#include<list>
#include<map>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define MAX 50
bool is_palindrom(ll p);
ll reverse_it(ll n);
int main()
{
    ll N, P;
    sf("%lld",&N);
    while(N--){
        sf("%lld",&P);
        ll count = 0;
        while(true){
            ll Q = reverse_it(P);
            if(P == Q)  break;
            P += Q;
            count++;
        }
        pf("%lld %llu\n",count,P);
    }
    return 0;
}
ll reverse_it(ll n){
    ll r = 0;
    while(n > 0){
        r =(10*r) + (n%10);
        n = n / 10;
    }
    return r;
}
