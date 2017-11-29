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
/*Big Mod function*/
template <class T>
T big_mod(T b, T e, T m)
{
    T r = 1;
    for(; e; e >>= 1)
    {
        if(e & 1) r = (r * b) % m;
        b = ((b % m) * (b % m)) % m;
    }
    return r;
}
/*-----------   End of Big Mod   -----------*/

/*Prime checking function: Miller - Rabin*/
bool is_prime(ll p)
{
    if(p < 2 || (p != 2 && !(p & 1))) return false;
    ll s = p - 1;
    while(!(s & 1)) s >>= 1;
    for(ll i = 0; i < 10; ++i)
    {
        ll a = rand() % (p - 1) + 1, temp = s;
        ll mod = ll(big_mod(ll(a), ll(temp), ll(p)));
        while(temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = (ll(mod) * mod) % p;
            temp <<= 1;
        }
        if(mod != p - 1 && !(temp & 1)) return false;
    }
    return true;
}
/*-----------   End of Miller - Rabin   -----------*/

/*Prime generator method: Sive of Eratosthenes*/
#define PRIMES 0
vi primes;
bitset<PRIMES> bs;
void sieve_method()
{
    bs.flip(); bs.reset(0); bs.reset(1);
    for(int n = 4; n < PRIMES; n += 2) bs.reset(n); primes.pb(0); primes.pb(2);
    for(int n = 3, LIMIT = (int)sqrt(PRIMES); n < PRIMES; n += 2) if(bs.test(n))
    {
        primes.pb(n); if(n <= LIMIT) for(int x = (n * n); x < PRIMES; x += (2 * n)) bs.reset(x);
    }
}
/*-------End of Sieve of Eratosthenes-------*/
/*****************************************************************************************************/
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
    int n, k, m, arr[20];
    while(sf("%d %d %d", &n, &k, &m))
    {
        if(!n && !k && !m) break;
        bitset<20> bs; REP(i, 0, n - 1)
        {
            bs.set(i);
            arr[i] = i + 1;
        }

        bool foundA = false, foundB = false, flag = false;
        int bIndex = 0, eIndex = n - 1, clock = 0, antiClock = 0;
        while(bs.to_ulong())
        {
            if(!foundA && bs[bIndex])//Find the first element:
            {
                antiClock++;
                if(antiClock == k)
                    foundA = true;
            }
            if(!foundA)
            {
                bIndex++;
                if(bIndex == n) bIndex = 0;
            }


            if(!foundB && bs[eIndex])//Find the second element:
            {
                clock++;
                if(clock == m)
                    foundB = true;
            }
            if(!foundB)
            {
                eIndex--;
                if(eIndex == -1) eIndex = n - 1;
            }
            if(foundA && foundB)//Print output:
            {
                antiClock = clock = 0;
                bs.reset(bIndex); bs.reset(eIndex);
                if(flag) pf(","); flag = true;
                if(bIndex != eIndex) pf("%3d%3d", arr[bIndex], arr[eIndex]);
                else pf("%3d", arr[bIndex]);
                foundA = foundB = false; flag = true;
            }
        }
        pf("\n");
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
}
