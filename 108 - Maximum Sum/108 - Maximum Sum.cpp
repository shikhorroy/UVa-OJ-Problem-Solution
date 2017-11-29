/*
    Coder: Shikhor Roy.
     CSE - 2012, HSTU.
*/
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

#define MAX 105
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
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
#define out(x) cout<< (x) << endl
#define out2(x, y) cout<< (x) << " " << (y) << endl
#define out3(x, y, z) cout<< (x) << " " << (y) << " " << (z) << endl
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define TEST int cnum; sf("%d", &cnum); REP(cs, 1, cnum)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))

#define PRINT(x, n) \
    for(int i = 0; i <= n; i++) printf("%4d ", x[i]);puts("");

//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
ll store[MAX][MAX], temp[MAX], tmpArr[MAX];
ll max(ll a, ll b)
{
    return (a > b) ? a : b;
}
ll kadane(int n)
{
    ll maxSum = temp[0];
    tmpArr[0] = maxSum;
    REP(i, 1, n)
    {
        maxSum = max(maxSum, tmpArr[i] = max(tmpArr[i - 1] + temp[i], temp[i]));
    }
    return maxSum;
}
ll max_sum(int n)
{
    ll maxSum = LONG_LONG_MIN;
    REP(i, 0, n)
    {
        memset(temp, 0, sizeof(temp));
        REP(j, i, n)
        {
            REP(k, 0, n)
            temp[k] += store[k][j];
//            puts("The temp is: "); PRINT(temp, n);
            ll sum = kadane(n);
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}
int main()
{
//    READ("in.in");
//    double cl = clock();
    int n;
    while(si(n) == 1)
    {
        REP(i, 0, n - 1) REP(j, 0, n - 1) sf("%lld", &store[i][j]);
        pf("%lld\n", max_sum(n - 1));
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}

