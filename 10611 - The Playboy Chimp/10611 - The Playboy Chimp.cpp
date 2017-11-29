/******************Joy Krishna****************
*    Online Judge: UVa OJ
*    Problem Name:10611 - The Playboy Chimp
*Problem Category:
*Coder: Shikhor Roy(CSE - 2012, HSTU).
*********************************************/
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

#define MAX 1000000001
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

int main()
{
//    READ("in.in");
//    double cl = clock();
        long n, q;
        while(sf("%ld", &n) == 1)
        {
            long x;
            vector<long> v;
            for(long i = 0; i < n; i++)
            {
                sf("%ld", &x);
                v.pb(x);
            }
            sf("%ld", &q);
            for(long i = 0; i < q; i++)
            {
                sf("%ld", &x);

                vector<long> :: iterator low, up;
                low = lower_bound(v.begin(), v.end(), x);
                up = upper_bound(v.begin(), v.end(), x);

                long l = (long)(low - v.begin()) , h = (long)(up - v.begin());
                if(l == 0) pf("X ");
                else pf("%ld ", v[l - 1]);

                if(h == n) pf("X\n");
                else pf("%ld\n", v[h]);
            }
        }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}

