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

vi adjList[MAX];
bool visited[MAX];
void connected_componenet_using_dfs(int src)
{
    visited[src] = true;
    int l = adjList[src].sz;
    REP(i, 0, l - 1)
    {
        int v = adjList[src][i];
        if(visited[v] == false)
            connected_componenet_using_dfs(v);
    }
}
void CLR(int n)
{
    REP(i, 1, n)
    adjList[i].clr;
}
int main()
{
    int cnum;
    si(cnum);getchar(); getchar();
    REP(i, 1, cnum)
    {
        if(i != 1)
            pf("\n");
        char ch;
        ch = getchar(); getchar();
        int index = ch - 'A' + 1;
        string str;
        while(getline(cin, str), str.length())
        {
            char ch1 = str[0], ch2 = str[1];
            adjList[ch1 - 'A' + 1].pb(ch2 - 'A' + 1);
            adjList[ch2 - 'A' + 1].pb(ch1 - 'A' + 1);
        }
        int components = 0;
        REP(j, 1, index)
        visited[j] = false;
        REP(j, 1, index)
        if(visited[j] == false)
        {
            connected_componenet_using_dfs(j);
            components++;
        }
        pf("%d\n",components);
        CLR(index);
    }
    return 0;
}
