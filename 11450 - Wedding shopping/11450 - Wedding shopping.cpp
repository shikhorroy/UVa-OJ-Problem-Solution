/* ----- S. Roy(CSE - 2012, HSTU) ----- */
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

//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
#define mx 25
int m, c, prices[mx][mx], memo[210][mx];
int shop(int cash, int g)
{
    if(cash < 0) return INT_MIN;
    if(g == c) return m - cash;
    if(memo[cash][g] != -1) return memo[cash][g];

    int ans = -1;
    REP(i, 1, prices[g][0])
        ans = max(ans, shop(cash - prices[g][i], g + 1));
    return (memo[cash][g] = ans);
}
int main()
{
#ifndef ONLINE_JUDGE
    READ("WS.txt");
    double cl = clock();
#endif // ONLINE_JUDGE

    TEST
    {
        sf("%d %d", &m, &c);
        REP(i, 0, c - 1)
        {
            sf("%d", &prices[i][0]);
            REP(j, 1, prices[i][0])
            {
                sf("%d", &prices[i][j]);
            }
        }
        mem(memo, -1);
        int ans = shop(m, 0);
        if(ans > 0)
            printf("%d\n", ans);
        else
            printf("no solution\n");
    }
#ifndef ONLINE_JUDGE
    cl = clock() - cl;
    pf("\nTotal Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
#endif // ONLINE_JUDGE
    return 0;
}
