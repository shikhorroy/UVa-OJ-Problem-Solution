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
struct table
{
    char ch;
    int value;
    bool operator < (const table& t) const{
        return (value > t.value);
    }
};
int main()
{
//    READ("in.txt");
//    double cl = clock();
    char ch;
    string str;
    int cnum, i; si(cnum); getchar();
    map<char, int> op;
    REP(cs, 1, cnum)
    {
        getline(cin, str);
        int l = str.ln;
        for(int i = 0; i < l; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                op[str[i]]++;
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                ch = char((int)str[i] - 32);
                op[ch]++;
            }
        }
    }
    table t[26];
    map<char, int> :: iterator it1 = op.begin(), it2 = op.end();
    for(i = 0; it1 != it2; ++it1, ++i)
    {
        t[i].ch = (it1->first);
        t[i].value = (it1->second);
    }
    sort(t, t + i);
    for(int j = 0; j < i; j++)
        pf("%c %d\n", (t[j].ch), (t[j].value));
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
