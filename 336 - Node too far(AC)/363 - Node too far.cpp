#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
using namespace std;
#define MAX 200
map <int, int> M;
vector <int> EDGE[MAX];
queue <int> Q;

int dist[MAX];

void BFS(int source)
{
    int test[MAX] = {0};
    Q.push(source);
    test[source] = 1;
    for(int i = 1; i <= 30; i++) dist[i] = 0;
    while(!Q.empty())
    {
        int u = Q.front();
        for(int i = 0; i < EDGE[u].size(); i++)
        {
            int x = EDGE[u][i];
            if(test[x] == 0)
            {
                dist[x] = dist[u] + 1;
                Q.push(x);
                test[x] = 1;
            }
        }
        Q.pop();
    }
}
void SHOW(int src, int TTL)
{
    static int T = 0;
    int n = M.size();
    sort(dist, (dist + n + 1));

    int i, zeros = 0;
    for(i = 1; i <= n; i++)
    {
        if(dist[i] == 0)
        {
            zeros++;
            continue;
        }
        if(dist[i] > TTL)   break;
    }
    int nodes = (n - i + 1 + (zeros -1));
    printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++T, nodes, src, TTL);
}
int main()
{
    int NC;
    while(scanf("%d",&NC), NC != 0)
    {
        int e1, e2, value = 0;
        map <int, int>::iterator it;

        while(NC--)
        {
            scanf("%d%d",&e1,&e2);

            it = M.find(e1);
            if(it == M.end())   M[e1] = ++value;

            it = M.find(e2);
            if(it == M.end())   M[e2] = ++value;

            e1 = M[e1];
            e2 = M[e2];
            EDGE[e1].push_back(e2);
            EDGE[e2].push_back(e1);
        }
        int src, TTL;
        int temp_src = -1;
        while(scanf("%d%d",&src,&TTL),(src != 0 || TTL != 0))
        {
            int s = src;
            src = M[src];

            if(src != temp_src) BFS(src);

            int n = M.size();

            SHOW(s, TTL);
            temp_src = src;
        }
        M.clear();
        for(int i = 1; i <= 30; i++)    EDGE[i].clear();
    }
    return 0;
}
