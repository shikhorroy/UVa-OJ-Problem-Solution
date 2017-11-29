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

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;

bool visited[MAX];
vi adjList[MAX];
stack < int > stk;

void top_sort(int u)
{
    visited[u] = true;
    int l = adjList[u].sz;
    REP(i, 0, l - 1)
    {
        int v = adjList[u][i];
        if(visited[v] == false)
            top_sort(v);
    }
    stk.push(u);
}
void CLR(int n)
{
    REP(i, 0, n)
    adjList[i].clr;
}
int main()
{
//    READ("in.txt");
    int m, n;
    while(si(n), si(m))
    {
        if(m == 0 && n == 0)
            break;
        int x, y;
        REP(i, 1, m)
        {
            si(x); si(y);
            adjList[x].pb(y);
        }

        REP(i, 0, n)
        visited[i] = false;

        REP(i, 1, n)
        if(visited[i] == false)
        top_sort(i);

        while(!stk.empty())
        {
            pf("%d ",stk.top());
            stk.pop();
        }
        pf("\n");
        CLR(n);
    }
    return 0;
}
