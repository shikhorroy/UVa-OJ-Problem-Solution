#include<iostream>
#include<queue>
#include<cmath>
#include<iomanip>
using namespace std;
#define MAXN 202
#define int64 long long
struct sub
{
    float u, v, w;
    bool operator < (const sub& s) const
    {
        return (w > s.w);
    }
};
vector <sub> v[MAXN], nodes;
float mst(int64 n)
{
    priority_queue <sub> pQ;
    int64 use[MAXN] = {0};
    int64 start = 1;
    float sum = 0;
    for(int64 i = 0; i < (int64)v[start].size(); i++)
    {
        pQ.push(v[start][i]);
    }
    use[start] = 1;
    while(!pQ.empty())
    {
        sub s = pQ.top();
        pQ.pop();
        int64 u = (int64)(s.v);
        if(use[u] == 0)
        {
            use[u] = 1;
            sum += s.w;
        }
        for(int64 i = 0; i < (int64)v[u].size(); i++)
        {
            s = v[u][i];
            int indx = (int64)(s.v);
            if(use[indx] == 0)
            {
                pQ.push(v[u][i]);
            }
        }
    }
    return sum;
}
float edge(float xi, float yi, float xj, float yj)
{
    return sqrt((xi - xj) * (xi - xj) + (yi - yj) * (yi - yj));
}
void make_edges()
{
    sub s, s1, s2;
    int loop = (int)nodes.size();
    for(int i = 0; i < loop - 1; i++)
    {
        s1 = nodes[i];
        float xi = s1.u, yi = s1.v;
        for(int j = i + 1; j < loop; j++)
        {
            s2 = nodes[j];
            float xj = s2.u, yj = s2.v;
            float weight = edge(xi, yi, xj, yj);
            s.v = float(j + 1);
            s.w = weight;
            v[(i + 1)].push_back(s);
            s.v = float(i + 1);
            v[(j + 1)].push_back(s);
        }
    }
}
void v_clear(int64 n)
{
    for(int i = 1; i <= n; i++)
        v[i].clear();
}
int main()
{
    int64 nods, cnum;
    cin>>cnum;
    for(int64 l = 0; l < cnum; l++)
    {
        if(l) cout<<endl;
        cin>>nods;
        for(int64 i = 0; i < nods; i++)
        {
            sub s;
            float x, y;
            cin>>x>>y;
            s.u = x;
            s.v = y;
            nodes.push_back(s);
        }
        make_edges();
        cout<<fixed<<setprecision(2)<<mst(nods)<<endl;
        nodes.clear();
        v_clear(nods);
    }
    return 0;
}
