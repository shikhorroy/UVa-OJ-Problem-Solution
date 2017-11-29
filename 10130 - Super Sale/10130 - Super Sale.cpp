#include<bits/stdc++.h>
using namespace std;

#define MAXN 1005
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
int weight[MAXN];
int costs[MAXN], profit[MAXN][MAXN];
void knapsack(int items, int CAP)
{
    for(int i = 1; i <= items; i++)
    {
        for(int w = 1; w <= CAP; w++)
        {
            if(weight[i] > w)
                profit[i][w] = profit[i-1][w];
            else
                profit[i][w] = max(profit[i-1][w], profit[i-1][w-weight[i]] + costs[i]);
        }
    }
}
int main()
{
//    READ("in.txt");
    int CAP, m, n, cnum;
    si(cnum);
    while(cnum--)
    {
        si(n);
        for(int i = 1; i <= n; i++)
            sf("%d %d", &costs[i], &weight[i]);
        si(m);
        int sum = 0;
        bool flag[MAXN] = {false};
        for(int i = 1; i <= m; i++)
        {
            si(CAP);
            if(flag[CAP] == false)
            {
                knapsack(n, CAP);
                flag[CAP] = true;
            }
            sum += profit[n][CAP];
        }
        pf("%d\n", sum);
    }
    return 0;
}
