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
#define TEST int cnum; sf("%d\n", &cnum); REP(cs, 1, cnum)
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

#define PROBS 15
#define TEAMS 101
struct teamInfo{
    int teamNo;
    int solved[PROBS];
    int penalty[PROBS];
    bool submission;
}team[TEAMS];

void reset()
{
    for(int i = 0; i < TEAMS; i++){
        team[i].teamNo = i;
        mem(team[i].solved, 0);
        mem(team[i].penalty, 0);
        team[i].submission = false;
    }
}

bool comp(teamInfo t1, teamInfo t2)
{
    if(t1.solved[10] > t2.solved[10]) return true;
    if(t1.solved[10] == t2.solved[10] && t1.penalty[10] < t2.penalty[10]) return true;
    if(t1.solved[10] == t2.solved[10] && t1.penalty[10] == t2.penalty[10] && t1.teamNo < t2.teamNo) return true;
    return false;
}

void calculateAll()
{
    for(int i = 1; i < TEAMS; i++){
        for(int p = 1; p < 10; p++){
            if(team[i].solved[p]){
                team[i].solved[10]++;
                team[i].penalty[10] += team[i].penalty[p];
            }
        }
    }
}

char l, str[30];
int contestant, problem, times;
int main()
{
//    READ("input.txt");
//    double cl = clock();
//    sieve_method();
    int cnum; sf("%d\n", &cnum);

    for(int cs = 1; cs <= cnum; cs++)
    {
        reset();

        while(gets(str) && strlen(str))
        {
            sscanf(str, "%d %d %d %c", &contestant, &problem, &times, &l);

            team[contestant].submission = true;

            if(l == 'R' || l == 'E' || l == 'U') continue;

            if(l == 'I')
            {
                if(!team[contestant].solved[problem]){
                    team[contestant].penalty[problem] += 20;
                }
            }
            else{
                if(!team[contestant].solved[problem])
                {
                    team[contestant].solved[problem] = 1;
                    team[contestant].penalty[problem] += times;
                }
            }
        }

        calculateAll();
        sort(team, team + TEAMS, comp);

        if(cs != 1) pf("\n");
        for(int i = 0; i < TEAMS; i++){
            if(team[i].submission){
                pf("%d %d %d\n", team[i].teamNo, team[i].solved[10], team[i].penalty[10]);
            }
        }
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
