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

/*****************************************************************************************************/
/*------------------Begining of Union Find-----------------------*/
#define ELEMENTS 30003
int par[ELEMENTS];
void Union(int p, int q){par[p] = q;}
void make_set(int n){REP(i, 0, n - 1) par[i] = i;}
int find_parent(int p){
    if(par[p] == p) return p;
    return (par[p] = find_parent(par[p]));
}
/*------------------Ending of Union Find-----------------------*/
/*****************************************************************************************************/
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

int n, m, k, k1, k2, par0, parK1;

int main()
{
//    READ("input.txt");
//    double cl = clock();
//    sieve_method();
    while(sf("%d %d", &n, &m) == 2 && (n || m))
    {
        make_set(n);

        set<int> students;
        REP(i, 1, m)
        {
            sf("%d", &k);
            if(k){
                sf("%d", &k1);
                parK1 = find_parent(k1);
                students.insert(k1);
            }
            REP(j, 2, k){
                sf("%d", &k2);
                students.insert(k2);
                Union(find_parent(k2), parK1);
            }
        }
        int ans = 0;
        par0 = find_parent(0);
        set<int> :: iterator it1 = students.begin(), it2 = students.end();

        if(*it1 == 0) for(; it1 != it2; ++it1){
            if(find_parent(*it1) == par0) ans++;
        }
        pf("%d\n", ans == 0 ? 1 : ans);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
