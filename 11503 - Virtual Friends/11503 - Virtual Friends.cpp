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

#define MAX 100004
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
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int par[MAX];
int friends[MAX];
int findPar(int n)
{
    if(par[n] == n) return n;
    else return(par[n] = findPar(par[n]));
}
void makeUnion(int u, int v)
{
    friends[v] += friends[u];
    par[u] = v;
}
int main()
{
//    READ("in.txt");
//    READ("discuss.in");
    int cnum, fShips;
    si(cnum);
    while(cnum--)
    {
        si(fShips);
        int id = 0;
        msi network;
        REP(f, 1, fShips)
        {
            string name1, name2;
            cin >> name1 >> name2;
            if(network.find(name1) == network.end())
            {
                network[name1] = id++;
                par[network[name1]] = network[name1];
                friends[network[name1]] = 1;
            }
            if(network.find(name2) == network.end())
            {
                network[name2] = id++;
                par[network[name2]] = network[name2];
                friends[network[name2]] = 1;
            }
            int u = network[name1], v = network[name2];
            int parU = findPar(u), parV = findPar(v);
            if(parU != parV)
                makeUnion(parU, parV);
            pf("%d\n",friends[parV]);
        }
    }
    return 0;
}
