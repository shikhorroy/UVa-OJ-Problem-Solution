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
#define WRITE(f) freopen(f, "w", stdout)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
void conjugation_ar(string root);
void conjugation_er(string root);
void conjugation_ir(string root);
void conjugation_null();
int main()
{
//    READ("in.txt");
//    double cl = clock();
    bool flag = false;
    string v1, v2;
    while(cin >> v1 >> v2)
    {
        int l = v1.ln;

        string conjugation;
        conjugation += v1[l - 2];
        conjugation += v1[l - 1];

        string root = v1.substr(0, l - 2);

        if(flag == true) cout << endl; flag = true;

        cout << v1 << " (to " << v2 << ")" << endl;

        if(conjugation == "ar")
            conjugation_ar(root);
        else if(conjugation == "er")
            conjugation_er(root);
        else if(conjugation == "ir")
            conjugation_ir(root);
        else
            conjugation_null();
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
void conjugation_ar(string root)
{
    string op;
    op = "eu        " + root + "o" + "\n" +
         "tu        " + root + "as" + "\n" +
         "ele/ela   " + root + "a" + "\n" +
         "n" + char(243) + "s       " + root + "amos" + "\n" +
         "v" + char(243) + "s       " + root + "ais" + "\n" +
         "eles/elas " + root + "am" + "\n";
    cout << op;
}
void conjugation_er(string root)
{
    string op;
    op = "eu        " + root + "o" + "\n" +
         "tu        " + root + "es" + "\n" +
         "ele/ela   " + root + "e" + "\n" +
         "n" + char(243) + "s       " + root + "emos" + "\n" +
         "v" + char(243) + "s       " + root + "eis" + "\n" +
         "eles/elas " + root + "em" + "\n";
    cout << op;
}
void conjugation_ir(string root)
{
    string op;
    op = "eu        " + root + "o" + "\n" +
         "tu        " + root + "es" + "\n" +
         "ele/ela   " + root + "e" + "\n" +
         "n" + char(243) + "s       " + root + "imos" + "\n" +
         "v" + char(243) + "s       " + root + "is" + "\n" +
         "eles/elas " + root + "em" + "\n";
    cout << op;
}
void conjugation_null()
{
    cout << "Unknown conjugation\n";
}
