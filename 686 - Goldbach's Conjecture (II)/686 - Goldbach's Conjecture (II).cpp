#include<bits/stdc++.h>
using namespace std;

#define MAX 32768
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
vi primes;
bool flag[MAX + 1];
const int limit = (int)sqrt(MAX);
void sieve_method()
{
    primes.pb(0);primes.pb(2); flag[2] = true;
    for(int i = 3; i <= MAX; i += 2) flag[i] = true;
    for(int i = 3; i <= MAX; i += 2)
    {
        if(flag[i])
        {
            primes.pb(i);
            if(i <= limit) for(int j = i * i; j <= MAX; j += (2 * i)) flag[j] = false;
        }
    }
}
int main()
{
//    READ("in.txt");
//    double cl = clock();
    sieve_method();
    int n;
    while(scanf("%d",&n), n != 0)
    {
        int total = 0;
        for(int i = 1; primes[i] <= n / 2 ; i++)
            if(flag[n - primes[i]]) total++;
        pf("%d\n", total);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
