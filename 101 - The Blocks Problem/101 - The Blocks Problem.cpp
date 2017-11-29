/****************** Joy Krishna ****************
*---------Online Judge: UVa OJ
*---------Problem Name: 101 - The Blocks Problem
*-----Problem Category: Ad Hoc, Data structure(Stack)
*-Algorithm Complexity:
*-----Coder: Shikhor Roy(CSE - 2012, HSTU).
***********************************************/
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>
#include<ctime>

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

#define EPS 1E-4
#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii > vpii;
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
#define out(x) cout<< (x) << endl
#define out2(x, y) cout<< (x) << " " << (y) << endl
#define out3(x, y, z) cout<< (x) << " " << (y) << " " << (z) << endl
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define TEST int cnum; sf("%d", &cnum); REP(cs, 1, cnum)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int main()
{
    READ("in.in");
//    double cl = clock();
    int n; sf("%d\n", &n);
    char str[20], first[10], last[10];
    stack<int> stk[30];
    map<int, int> mp;

    REP(i, 0, n - 1){
        mp[i] = i;
        stk[i].push(i);
    }

    while(gets(str))
    {
        if(!strcmp(str, "quit")) break;

        int l = strlen(str), a, b;

        sscanf(str, "%s %d %s %d", &first, &a, &last, &b);

        if(!(strcmp(first, "move")))
        {
            if(!(strcmp(last, "onto")))
            {
                int posa = mp[a], posb = mp[b];
                if(posa == posb) continue;
                if(stk[posa].sz)
                {
                    int x = stk[posa].top();
                    while(x != a){
                        stk[x].push(x);
                        mp[x] = x;
                        stk[posa].pop();
                        x = stk[posa].top();
                    }
                    stk[posa].pop();
                }
                if(stk[posb].sz)
                {
                    int x = stk[posb].top();
                    while(x != b){
                        stk[x].push(x);
                        mp[x] = x;
                        stk[posb].pop();
                        x = stk[posb].top();
                    }
                    stk[posb].push(a);
                    mp[a] = posb;
                }
            }
            else if(!(strcmp(last, "over")))
            {
                int posa = mp[a], posb = mp[b];
                if(posa == posb) continue;

                if(stk[posa].sz)
                {
                    int x = stk[posa].top();
                    while(x != a){
                        stk[x].push(x);
                        mp[x] = x;
                        stk[posa].pop();
                        x = stk[posa].top();

                    }
                    stk[posa].pop();
                }
                stk[posb].push(a);
                mp[a] = posb;
            }
        }
        else if(!(strcmp(first, "pile")))
        {
            if(!(strcmp(last, "onto")))
            {
                int posa = mp[a], posb = mp[b];
                if(posa == posb) continue;
                if(stk[posb].sz)
                {
                    int x = stk[posb].top();
                    while(x != b){
                        stk[x].push(x);
                        mp[x] = x;
                        stk[posb].pop();
                        x = stk[posb].top();
                    }
                }
                if(stk[posa].sz)
                {
                    int x = stk[posa].top();
                    vector<int> v;
                    while(x != a)
                    {
                        v.pb(x);
                        stk[posa].pop();
                        x = stk[posa].top();
                    }
                    v.pb(a);
                    stk[posa].pop();
                    for(int i = v.sz - 1; i >= 0; i--)
                    {
                        stk[posb].push(v[i]);
                        mp[v[i]] = posb;
                    }
                }
            }
            else if(!(strcmp(last, "over")))
            {
                int posa = mp[a], posb = mp[b];
                if(posa == posb) continue;
                if(stk[posa].sz)
                {
                    int x = stk[posa].top();
                    vector<int> v;
                    while(x != a)
                    {
                        v.pb(x);
                        stk[posa].pop();
                        x = stk[posa].top();
                    }
                    v.pb(a);
                    stk[posa].pop();
                    for(int i = v.sz - 1; i >= 0; i--)
                    {
                        stk[posb].push(v[i]);
                        mp[v[i]] = posb;
                    }
                }
            }
        }
    }
    REP(i, 0, n - 1)
    {
        pf("%d:", i);
        vector<int> ans;
        while(!stk[i].empty())
        {
            ans.pb(stk[i].top());
            stk[i].pop();
        }
        int l = ans.sz - 1;
        for(int j = l; j >= 0; j--) pf(" %d", ans[j]);
        pf("\n");
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
