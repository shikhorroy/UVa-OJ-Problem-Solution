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

#define WHITE 0
#define BLUE 1
#define RED 2

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;

bool taken[MAX];
vi AdjList[MAX];
int color[MAX];
bool isBicolor_applying_BFS()
{
    int src = 0;
    mem(taken, true);
    mem(color, WHITE);
    queue <int> Q;
    Q.push(src);
    taken[src] = false;
    color[src] = RED;
    while(!Q.empty())
    {
        int u = Q.front(), l = AdjList[u].sz, flag = color[u];
        REP(i, 0, l - 1)
        {
            int v = AdjList[u][i];
            if(taken[v])
            {
                if(flag == RED)
                    color[v] = BLUE;
                else if(flag == BLUE)
                    color[v] = RED;
                taken[v] = false;
                Q.push(v);
            }
            else if(flag == RED && color[v] != BLUE ||
                flag == BLUE && color[v] != RED)
                    return false;
        }
        Q.pop();
    }
    return true;
}
void CLR(int n)
{
    REP(i, 0, n - 1)
    AdjList[i].clr;
}
int main()
{
    int n, l;
    while(si(n), n)
    {
        si(l);
        int n1, n2;
        REP(j, 0, l - 1)
        {
            si(n1);
            si(n2);
            AdjList[n1].pb(n2);
            AdjList[n2].pb(n1);
        }
        bool flag = isBicolor_applying_BFS();
        if(flag) pf("BICOLORABLE.\n");
        else pf("NOT BICOLORABLE.\n");
        CLR(n);
    }
    return 0;
}
