#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
#include<iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define PI acos(-1.0)
#define REP(i, b, e)\
for(int i = b; i <= e; i++)
#define sf scanf
#define pf printf
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <ii> vii;

ll d[MAX];
vii nodes[MAX];
bool bellman_ford(int V, int E)
{
    REP(i, 1, V - 1)
    d[i] = INT_MAX;
    d[0] = 0;
    REP(i, 1, V - 1)
    REP(j, 0, V -1)
    {
        int l = nodes[j].sz;
        REP(k, 0, l - 1)
        {
            int u = j, v = nodes[j][k].first, w = nodes[j][k].second;
            if(d[v] > d[u] + w)
                d[v] = d[u] + w;
        }
    }
    REP(j, 0, V -1)
    {
        int l = nodes[j].sz;
        REP(k, 0, l - 1)
        {
            int u = j, v = nodes[j][k].first, w = nodes[j][k].second;
            if(d[v] > d[u] + w)
                return true;
        }
    }
    return false;
}
void CLR(int n)
{
    REP(i, 0, n - 1)
    nodes[i].clr;
}
int main()
{
    READ("in.in");

    int c, V, E;
    sf("%d",&c);
    REP(i, 1, c)
    {
        sf("%d %d",&V, &E);
        REP(j, 1, E)
        {
            int u, v, w;
            sf("%d %d %d",&u, &v, &w);
            ii p = mp(v, w);
            nodes[u].pb(p);
        }
        bool flag = bellman_ford(V, E);
        if(!flag)  pf("not ");
        pf("possible\n");
        CLR(V);
    }

    return 0;
}
