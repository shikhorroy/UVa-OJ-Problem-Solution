#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
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

int bin2dec(string str)
{
    int l = str.length(), dec = 0;
    for(int i = l - 1, pwr = 0; i >= 0; i--, pwr++)
    {
        if(str[i] == '1')
            dec += (pow(2, pwr));
    }
    return dec;
}
int main()
{
//    READ("in.txt");
    int cnum;
    string str1, str2;
    si(cnum);
    REP(cs, 1, cnum)
    {
        cin >> str1 >> str2;
        int x = bin2dec(str1), y = bin2dec(str2);
        pf("%d %d\n", x, y);
        pf("Pair #%d: ", cs);
        if(__gcd(x, y) == 1)
            puts("Love is not all you need!");
        else
            puts("All you need is love!");
    }
    return 0;
}
