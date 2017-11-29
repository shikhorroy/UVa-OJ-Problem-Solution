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
#include<sstream>
using namespace std;
#define ll long long int
#define FOR(s,e) for(int i = s; i <= e; i++)
#define sc scanf
#define pf printf
#define mem(a,v) memset(a, v, sizeof(a))
#define MAXX 10002
vector<int>graph[MAXX];
int cost[MAXX][MAXX];
ll dist[MAXX];
bool visited[MAXX];
int farnode1;
ll bfs(int u)
{
    mem(visited, false);
    queue<int>Q;
    ll maxdist = 0;
    visited[u] = 1;
    Q.push(u);
    dist[u] = 0;
    int v;
    int len;
    while( !Q.empty() )
    {
        u = Q.front();
        if(dist[u] > maxdist)
        {
            maxdist = dist[u];
            farnode1 = u;
        }
        len = graph[u].size();
        for(int i = 0 ; i < len; i++)
        {
            v = graph[u][i];
            if(!visited[v])
            {
                visited[v] = 1;
                dist[v] = dist[u] + cost[u][v];
                Q.push(v);
            }
        }
        Q.pop();
    }
    return maxdist;
}
int main()
{
    int p, q, cst;
    string str;
    stringstream ss;
    while( ! cin.eof() )
    {
        getline(cin, str);
        if(str == "")
        {
            pf("0\n");
            getline(cin, str);
            continue;
        }
        for(int i = 0; i < MAXX; i++)   graph[i].clear();
        while( !cin.eof() && str.length() > 0 )
        {
            if(str == "") break;
            ss.clear();
            ss<<str;
            ss>>p>>q>>cst;
            graph[p].push_back(q);
            graph[q].push_back(p);
            cost[p][q] = cst;
            cost[q][p] = cst;
            getline(cin, str);
        }
        bfs(1);
        pf("%lld\n", bfs(farnode1));
    }
    return 0;
}
