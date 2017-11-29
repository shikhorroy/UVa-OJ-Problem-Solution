/****************** Krishna ********************
*-----Coder: Shikhor Roy(CSE - 2012, HSTU)-----*
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

typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii > vpii;
typedef map<string, int> msi;

#define EPS 1E-4
#define MAX 1000
#define PI acos(-1.0)

#define REP(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvpii(c, it)\
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

#define ELEMENTS 5005
int c, r, counter[ELEMENTS];

/*****************************************************************************************************/
/*-------------BEGINING of Disjoint data set: Union Find---------------------*/

int par[ELEMENTS];
void Union(int p, int q){ par[p] = q;}
void make_set(int n){ REP(i, 0, n - 1) { par[i] = i; counter[i] = 0; } }
int find_parent(int p){
    if(par[p] == p) return p;
    return (par[p] = find_parent(par[p]));
}
/*-------------END of Disjoint data set: Union Find---------------------*/
/*****************************************************************************************************/
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

int main()
{
//    READ("input.txt");
//    double cl = clock();
//    sieve_method();
    string creature, c1, c2;
    while(sf("%d %d", &c, &r) == 2 && (c || r))
    {
        msi m; int id = 0;
        REP(i, 1, c){
            cin >> creature;
            m[creature] = id++;
        }

        make_set(c);        
        
        REP(i, 1, r){
            cin >> c1 >>c2;
            Union(find_parent(m[c1]), find_parent(m[c2]));
        }
        int ans = -1;
        REP(i, 0, c - 1)
        {
            int p = find_parent(i);
            ans = max(ans, ++counter[p]);
        }
        pf("%d\n", ans);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
