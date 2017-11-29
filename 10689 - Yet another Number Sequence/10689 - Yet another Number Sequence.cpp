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
#define PRIMES 1000001
#define PI acos(-1.0)

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
/*--------------        Some Necessary Funcions        --------------*/
/*Big Mod function*/
//template <class T>
//T bigmod(T b, T e, T m)
//{
//    T r = 1;
//    for(; e; e >>= 1)
//    {
//        if(e & 1) r = (r * b) % m;
//        b = ((b % m) * (b % m)) % m;
//    }
//    return r;
//}
/*Big Mod function End*/

/*Prime generator method: Sive of Eratosthenes*/
//vi primes;
//bitset<PRIMES> bs;
//void sieve_method()
//{
//    bs.flip(); bs.reset(0); bs.reset(1);
//    for(int n = 4; n < PRIMES; n += 2) bs.reset(n); primes.pb(0); primes.pb(2);
//    for(int n = 3, LIMIT = (int)sqrt(PRIMES); n < PRIMES; n += 2) if(bs.test(n))
//    {
//        primes.pb(n); if(n <= LIMIT) for(int x = (n * n); x < PRIMES; x += (2 * n)) bs.reset(x);
//    }
//}
/*-------End of Sieve of Eratosthenes-------*/
/*--------------        Some Necessary Funcions        --------------*/

//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

int main()
{
//    READ("in.in");
//    WRITE("out.out");
//    double cl = clock();
//    sieve_method();
    int a, b, n, m;
    int pisano[] = {0, 60, 300, 1500, 15000}, pow10[] = {0, 10, 100, 1000, 10000};
    TEST
    {
        sf("%d %d %d %d", &a, &b, &n, &m);

        int seq = n % pisano[m];
        a = a % pow10[m];
        b = b % pow10[m];

        int *calc = new int[pisano[m]];
        calc[0] = a, calc[1] = b;
        for(int i = 2; i <= seq; i++) calc[i] = (calc[i - 1] + calc[i - 2]) % pow10[m];
        pf("%d\n", calc[seq]);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
