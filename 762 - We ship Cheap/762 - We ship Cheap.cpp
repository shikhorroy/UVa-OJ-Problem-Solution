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

#define MAX 1000
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
#define in(x) cin>>x
#define out(x) cout<<(x)
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

int par[MAX];
int dist[MAX];
vi adjList[MAX];
bool taken[MAX];
bool bfs_func(int src, int dst)
{
    mem(taken, false); mem(dist, 0);
    queue <int> Qi;
    Qi.push(src);
    taken[src] = true;
    par[src] = src;
    while(!Qi.empty())
    {
        int u = Qi.front();
        int l = adjList[u].sz;
        REP(i, 0, l - 1)
        {
            int v = adjList[u][i];
            if(taken[v] == false)
            {
                dist[v] = dist[u] + 1;
                Qi.push(v);
                taken[v] = true;
                par[v] = u;
                if(v == dst)
                    return true;
            }
        }
        Qi.pop();
    }
    return false;
}
void CLR(int n)
{
    REP(i, 0, n)
    adjList[i].clr;
}
int main()
{
//    READ("B.txt");
    int tIn;
    bool isNew = false;
    while(si(tIn) != EOF)
    {
        if(isNew) puts(""); isNew = true;
        msi MPsi;
        map <int, string> MPis;
        int node = 0;
        string node1, node2;
        while(tIn--)
        {
            in(node1); in(node2);
            if(MPsi.find(node1)  == MPsi.end()){
                    MPsi[node1] = ++node;
                    MPis[node] = node1;
            }
            if(MPsi.find(node2) == MPsi.end()){
                    MPsi[node2] = ++node;
                    MPis[node] = node2;
            }
            adjList[MPsi[node1]].pb(MPsi[node2]);
            adjList[MPsi[node2]].pb(MPsi[node1]);
        }
        in(node1); in(node2);
        if(node1 == node2)
            cout<<node1<<" "<<node2<<endl;
        else if(bfs_func(MPsi[node1], MPsi[node2]))
        {
            int v = MPsi[node2], u = par[v];
            vector <string> route;
            route.pb(node2);
            while(u != v)
            {
                v = u;
                u = par[v];
                route.pb(MPis[v]);
            }
            int l = route.sz;
            for(int i = l - 1; i > 0; i--)
            cout<<route[i]<<" "<<route[i - 1]<<endl;
        }
        else
            puts("No route");
        CLR(node);
    }
    return 0;
}
