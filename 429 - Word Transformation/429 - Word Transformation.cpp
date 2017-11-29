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

#define MAX 205
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
#define ln length()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

vi adjList[MAX];
int cost[MAX], taken[MAX];
bool visited[MAX];
void bfs(int src, int n)
{
    REP(i, 1, n)
    {
        visited[i] = false;
        cost[i] = 0;
    }
    queue <int> q;
    q.push(src);
    visited[src] = true;
    while(!q.empty())
    {
        int u = q.front(); q.pop();
        int l = adjList[u].sz;
        REP(i, 0, l - 1)
        {
            int v = adjList[u][i];
            if(visited[v] == false)
            {
                cost[v] = cost[u] + 1;
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
bool difference(string s1, string s2)
{
    int l = s1.ln, d = 0;
    REP(i, 0, l - 1)
    if(s1[i] != s2[i])
    {
        d++;
        if(d > 1)
            return false;
    }
    return true;
}
void CLR(int n)
{
    REP(i, 1, n)
    adjList[i].clr;
}
int main()
{
//    READ("in.txt");
    int cnum;
    si(cnum); getchar();
    while(cnum--)
    {
        int index = 0;
        msi m;
        string s;
        vector <string> str[MAX];
        while(cin>>s)
        {
            if(s == "*") break;
            int l = s.ln;
            if(m.find(s) == m.end())
                m[s] = ++index;
            str[l].pb(s);
            int lp = str[l].sz;
            REP(i, 0, lp - 2)
            {
                bool flag = difference(s, str[l][i]);
                if(flag)
                {
                    int u = m[s], v = m[str[l][i]];
                    adjList[u].pb(v);
                    adjList[v].pb(u);
                }
            }
        }
        getchar();
        string input, inp1, inp2;
        REP(i, 1, index)
        taken[i] = false;
        while(getline(cin, input), input.ln)
        {
            stringstream ss(input);
            ss>>inp1>>inp2;
            if(taken[m[inp1]] == false)
            {
                bfs(m[inp1], index);
                taken[m[inp1]] = true;
            }
            pf("%s %s %d\n",inp1.c_str(),
               inp2.c_str(), cost[m[inp2]]);
        }
        if(cnum) pf("\n");
        CLR(index);
    }
    return 0;
}
