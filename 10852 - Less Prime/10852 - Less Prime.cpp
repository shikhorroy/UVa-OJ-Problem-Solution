#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>

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

#define MAX 10005
#define PI acos(-1.0)
typedef long long ll;
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
bool flag[MAX];
vector<int> primes;
const int LIMIT = sqrt(MAX) + 1;

void sieve_method(){
    primes.push_back(0);
    primes.push_back(2);

    for(int i = 3; i < MAX; i += 2) flag[i] = true;

    for(int i = 3; i < MAX; i += 2){
        if(flag[i]){
            primes.push_back(i);
            if(i < LIMIT) for(int j = i*i; j < MAX; j += (2 * i)) flag[j] = false;
        }
    }
}
int main()
{
    READ("in.txt");
    sieve_method();
    int cnum;
    si(cnum);
    while(cnum--)
    {
        int num;
        si(num);
        int maxv = -1, res, l = primes.sz;
        for(int i = 1; i < l && primes[i] <= num ; i++)
        {
            int low = num / primes[i] - 1, val;
            if ((val = num - low * primes[i]) > maxv)
            {
                maxv = val;
                res = primes[i];
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
