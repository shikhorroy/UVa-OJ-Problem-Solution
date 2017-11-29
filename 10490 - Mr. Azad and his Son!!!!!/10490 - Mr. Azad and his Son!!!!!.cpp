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

#define MAX 1000
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
bool isPrime(int n)
{
    return (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31);
}
bool isPossible(int n)
{
    return (n == 2 || n == 3 || n == 5 || n == 7 || n == 13 || n == 17 || n == 19 || n == 31);
}
void printPerfect(int n)
{
    if(n == 2) puts("6!");
    else if(n == 3) puts("28!");
    else if(n == 5) puts("496!");
    else if(n == 7) puts("8128!");
    else if(n == 13) puts("33550336!");
    else if(n == 17) puts("8589869056!");
    else if(n == 19) puts("137438691328!");
    else if(n == 31) puts("2305843008139952128!");
}
int main()
{
//    READ("in.txt");
    bool flag = false;
    int n;
    while(sf("%d", &n), n)
    {
        if(isPossible(n)){
            pf("Perfect: ");
            printPerfect(n);
        }
        else{
            if(isPrime(n))
                puts("Given number is prime. But, NO perfect number is available.");
            else
                puts("Given number is NOT prime! NO perfect number is available.");
        }
    }
    return 0;
}
