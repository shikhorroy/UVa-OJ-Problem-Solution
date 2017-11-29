#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<string>
#include<climits>
using namespace std;
#define MAXN 20000
#define int64 long long
struct sub
{
    int64 v, w;
    bool operator < (const sub& s) const
    {
        return (w < s.w);
    }
};
vector <sub> v[MAXN];
int64 startp, endp;
int64 mst(int64 n)
{
    priority_queue <sub> pQ;
    int64 use[MAXN] = {0};
    int64 minv = LONG_LONG_MAX;
    for(int64 i = 0; i < (int64)v[startp].size(); i++)
        pQ.push(v[startp][i]);
    use[startp] = 1;

    while(!pQ.empty())
    {
        sub s = pQ.top();
        pQ.pop();
        int64 u = s.v;
        if(use[u] == 0)
        {
            use[u] = 1;
            if(s.w < minv)  minv = s.w;
            if(u == endp)   return minv;
        }
        for(int64 i = 0; i < (int64)v[u].size(); i++)
        {
            s = v[u][i];
            if(use[s.v] == 0) pQ.push(v[u][i]);
        }
    }
    return 0;
}

void vec_clear(int n){for(int i = 1; i <= n; i++) v[i].clear();}

int main()
{
    int64 nods, edgs, cnum = 1;
    while(cin>>nods>>edgs)
    {
        if(nods == 0 & edgs == 0) break;
        int64 val = 1;
        map<string, int>m;
        for(int64 i = 0; i < edgs; i++)
        {
            sub s;
            int64 w;
            string n1, n2;
            cin>>n1>>n2>>w;
            if(m.find(n1) == m.end()) m[n1] = val++;
            if(m.find(n2) == m.end()) m[n2] = val++;

            s.v = m[n2]; s.w = w;
            v[m[n1]].push_back(s);
            s.v = m[n1];
            v[m[n2]].push_back(s);
        }
        string source, dest;
        cin>>source>>dest;
        startp = m[source]; endp = m[dest];
        cout<<"Scenario #"<<(cnum++)<<endl;
        cout<<mst(nods)<<" tons"<<endl<<endl;
        vec_clear(nods);
    }
    return 0;
}
