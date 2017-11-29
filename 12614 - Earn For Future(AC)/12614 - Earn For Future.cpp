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
#define MAX 10002
int main()
{
    int T, N, C;
    sf("%d",&T);
    int cs = 0;
    while(T--){
        sf("%d",&N);
        int maxv = -1;
        while(N--){
            sf("%d",&C);
            if(C > maxv) maxv = C;
        }
        pf("Case %d: %d\n",++cs,maxv);
    }
    return 0;
}
