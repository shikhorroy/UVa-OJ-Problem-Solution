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

#define MAX 1010
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
#define WRITE(f) freopen(f, "w", stdout)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int l;
bool flag[MAX];
vector<int> primes;
const int LIMIT = sqrt(MAX);
void sieve_method()
{
    primes.push_back(0);
    primes.push_back(2);

    for(int i = 3; i <= MAX; i += 2) flag[i] = true;

    for(int i = 3; i <= MAX; i += 2)
    {
        if(flag[i])
        {
            primes.push_back(i);
            if(i <= LIMIT) for(int j = i * i; j <= MAX; j += (2 * i)) flag[j] = false;
        }
    }
    l = primes.sz;
}
int prime_factor(int num)
{
    bool yes = true;
    int total = 0;
    for(int i = 1; i < l && primes[i] * primes[i] <= num; i++)
    {
        int p = primes[i];
        if(num % p == 0){
            total++;
            while(num % p == 0)
                num = num / p;
        }
    }
    return (num > 1) ? (total + 1) : (total);
}
int main()
{
//    READ("in.txt");
    sieve_method();
//    double cl = clock();
    int num;
    while(sf("%d", &num), num != 0)
    {
        pf("%d : %d\n", num, prime_factor(num));
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
