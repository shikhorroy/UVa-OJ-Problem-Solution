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

#define MAX 35
#define PI acos(-1.0)
#define REP(i, b, e)\
for(int i = b; i <= e; i++)
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
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
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <string, int> msi;

bool taken[MAX];
vi AdjList[MAX];
int dist[MAX][MAX];

void bfs(int src)
{
    mem(taken, true);
    dist[src][src] = 0;
    taken[src] = false;
    priority_queue <int> pq;
    pq.push(src);
    while(!pq.empty())
    {
        int u = pq.top(); pq.pop();
        int l = AdjList[u].sz;
        REP(i, 0, l - 1)
        {
            int v = AdjList[u][i];
            if(taken[v])
            {
                dist[src][v] = dist[src][u] + 1;
                pq.push(v);
                taken[v] = false;
            }
        }
    }
}
void CLR(int n)
{
    REP(i, 1, n)
    AdjList[i].clr;
}
int main()
{
    READ("in.txt");
    int cnum, M, N, P;
    si(cnum);
    pf("SHIPPING ROUTES OUTPUT\n");
    REP(i, 1, cnum)
    {
        sf("%d %d %d",&M, &N, &P);
        msi m;
        vector <string> store;
        string str, str1, str2;
        REP(j, 1, M)
        {
            cin>>str;
            m[str] = j;
            store.pb(str);
        }
        REP(j, 1, N)
        {
            cin>>str1>>str2;
            AdjList[m[str1]].pb(m[str2]);
            AdjList[m[str2]].pb(m[str1]);
        }

        if(N)
        REP(j, 0, M - 1)
        bfs(m[store[j]]);

        pf("\nDATA SET  %d\n\n",i);
        int n;
        REP(j, 1, P)
        {
            cin>>n>>str1>>str2;
            int cost = dist[m[str1]][m[str2]];
            if(cost)
            pf("$%d\n", (n * cost * 100));
            else
            pf("NO SHIPMENT POSSIBLE\n");
        }
        CLR(M);
        REP(j, 1, M)
        mem(dist[j], 0);
    }
    pf("\nEND OF OUTPUT\n");

    return 0;
}
