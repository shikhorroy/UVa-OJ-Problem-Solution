#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>

#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<utility>
#include<sstream>
#include<bitset>
#include<algorithm>
using namespace std;

#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef map<string, int> msi;
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
#define WHITE 0
#define BLACK 1
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
vi adjList[MAX];
int isTook[MAX];
int nodes, edges;
int side, cs = 0;
bool yes(int x)//Weather within boundery or not.
{
    return (x > -1 && x < side);
}
void dfs_func(int src)
{
    isTook[src] = BLACK;
    TRvi(adjList[src], it)
    if(isTook[(*it)] == WHITE)
        dfs_func(*it);
}
void CLR(int n)
{
    REP(i, 0, n - 1) adjList[i].clr;
}
int main()
{
//    READ("in.txt");
//    READ("discuss.txt");
    while(si(side) != EOF)
    {
        getchar();
        int node = 0;
        string str, tstr;
        map<pii, int> m;
        REP(i, 0, side - 1)
        {
            getline(cin, str);
            REP(j, 0, side - 1)
            {
                if(str[j] == '1')
                {
                    if(m.find(mp(i, j)) == m.end())
                        m[mp(i, j)] = node++;
                    if(yes(j - 1) && str[j - 1] == '1')//if front is a node and has '1'.
                    {
                        adjList[m[mp(i, j - 1)]].pb(m[mp(i, j)]);
                        adjList[m[mp(i, j)]].pb(m[mp(i, j - 1)]);
                    }
                    if(yes(i - 1))//if there is an upper row.
                    {
                        if(yes(j - 1) && tstr[j - 1] == '1')
                        {
                            adjList[m[mp(i - 1, j - 1)]].pb(m[mp(i, j)]);
                            adjList[m[mp(i, j)]].pb(m[mp(i - 1, j - 1)]);
                        }
                        if(tstr[j] == '1')
                        {
                            adjList[m[mp(i - 1, j)]].pb(m[mp(i, j)]);
                            adjList[m[mp(i, j)]].pb(m[mp(i - 1, j)]);
                        }
                        if(yes(j + 1) && tstr[j + 1] == '1')
                        {
                            adjList[m[mp(i - 1, j + 1)]].pb(m[mp(i, j)]);
                            adjList[m[mp(i, j)]].pb(m[mp(i - 1, j + 1)]);
                        }
                    }
                }
            }
            tstr = str;
        }
        int tWar = 0;
        REP(i, 0, node -1)  isTook[i] = WHITE;
        REP(nd, 0, node - 1)
        {
            if(isTook[nd] == WHITE)
            {
                tWar++;
                dfs_func(nd);
            }
        }
        pf("Image number %d contains %d war eagles.\n", ++cs, tWar);
        CLR(node);
    }
    return 0;
}
