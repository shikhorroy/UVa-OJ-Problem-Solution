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

#define MAX 22
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
int super[MAX], store[MAX];
int long_seq(int n)
{
    int matrix[MAX][MAX];

    REP(i, 0, n)
    {
        REP(j, 0, n)
        {
            if(i == 0 || j == 0)
                matrix[i][j] = 0;
            else if(super[i] == store[j])
                matrix[i][j] = matrix[i - 1][j - 1] + 1;
            else
                matrix[i][j] = max(matrix[i][j - 1], matrix[i - 1][j]);
        }
    }
    return matrix[n][n];
}
int main()
{
//    READ("in.txt");
//    double cl = clock();
    int n;
    sf("%d", &n);
    REP(event, 1, n)
    {
        int pos;
        sf("%d", &pos);
        super[pos] = event;
    }
    while(true)
    {
        bool isBreak = false;
        REP(event, 1, n)
        {
            int pos;
            if(sf("%d", &pos) == EOF)
            {
                isBreak = true;
                break;
            }
            else store[pos] = event;
        }
        if(isBreak) break;
        pf("%d\n", long_seq(n));
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
