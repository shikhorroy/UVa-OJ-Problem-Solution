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

#define MAX 25
#define PI acos(-1.0)

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <string, int> msi;

#define REP(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvii(c, it)\
    for(vii::iterator it = (c).begin(); it != (c).end(); ++it )
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

vi adjList[MAX];
int dist[MAX][MAX];
bool taken[MAX];
void bfs(int src, int n)
{
    REP(i, 1, n)
    taken[i] = false;

    queue < int > Q;
    dist[src][src] = 0;
    taken[src] = true;
    Q.push(src);

    while(!Q.empty())
    {
        int u = Q.front(); Q.pop();
        int l = int(adjList[u].sz);
        REP(i, 0, l - 1)
        {
            int v = adjList[u][i];
            if(taken[v] == false)
            {
                Q.push(v);
                dist[src][v] = dist[src][u] + 1;
                taken[v] = true;
            }
        }
    }
}

void CLR(int n)
{
    REP(i, 1, n)
    adjList[i].clr;
}
int main()
{
    int n, T = 0;
    READ("in.txt");
    while(true)
    {
        REP(i, 1, 19)
        {
            int v;
            if(si(n) == EOF) return 0;
            REP(j, 1, n)
            {
                si(v);
                adjList[i].pb(v);
                adjList[v].pb(i);
            }
        }
        bool done[MAX] = {false};
        int x, n1, n2;
        si(x);
        pf("Test Set #%d\n", (++T));
        REP(i, 1, x)
        {
            si(n1);
            if(!done[n1])
            {
                bfs(n1, 20);
                done[n1] = true;
            }
            si(n2);
            pf("%2d to %2d: %d\n",n1, n2, dist[n1][n2]);
        }
        pf("\n");
        CLR(20);
    }
}
