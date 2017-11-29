/******************Joy Krishna****************
*    Online Judge:
*    Problem Name:
*Problem Category:
*Coder: Shikhor Roy(CSE - 2012, HSTU).
*********************************************/
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

#define EPS 1E-4
#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii > vpii;
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
#define TEST int cnum; sf("%d", &cnum); REP(cs, 1, cnum)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
map<string, char> m;
void pre_assign()
{
    // Alpha
    m[".-"] = 'A'; m["-..."] = 'B'; m["-.-."] = 'C'; m["-.."] = 'D';
    m["."] = 'E'; m["..-."] = 'F'; m["--."] = 'G'; m["...."] = 'H';
    m[".."] = 'I'; m[".---"] = 'J'; m["-.-"] = 'K'; m[".-.."] = 'L';
    m["--"] = 'M'; m["-."] = 'N'; m["---"] = 'O'; m[".--."] = 'P';
    m["--.-"] = 'Q'; m[".-."] = 'R'; m["..."] = 'S'; m["-"] = 'T';
    m["..-"] = 'U'; m["...-"] = 'V'; m[".--"] = 'W'; m["-..-"] = 'X';
    m["-.--"] = 'Y'; m["--.."] = 'Z';
    // Numeric
    m["-----"] = '0'; m[".----"] = '1'; m["..---"] = '2';
    m["...--"] = '3'; m["....-"] = '4'; m["....."] = '5';
    m["-...."] = '6'; m["--..."] = '7'; m["---.."] = '8'; m["----."] = '9';
    // Punctuation
    m[".-.-.-"] = '.'; m["--..--"] = ','; m["..--.."] = '?';
    m[".----."] = '\''; m["-.-.--"] = '!'; m["-..-."] = '/';
    m["-.--."] = '('; m["-.--.-"] = ')'; m[".-..."] = '&';
    m["---..."] = ':'; m["-.-.-."] = ';'; m["-...-"] = '=';
    m[".-.-."] = '+'; m["-....-"] = '-'; m["..--.-"] = '_';
    m[".-..-."] = '\"'; m[".--.-."] = '@';
}
int main()
{
//    READ("in.in");
//    double cl = clock();
    pre_assign();
    string line, str;
    bool flag = false;
    int cnum; sf("%d\n", &cnum);
    REP(cs, 1, cnum)
    {
        getline(cin, line);

//        out(line);
        if(flag) putchar('\n'); flag = true;
        pf("Message #%d\n", cs);

        str = ""; int l = line.ln;
        REP(i, 0, l - 1)
        {
            if(line[i] == ' ' && line[i - 1] == ' ') putchar(' ');
            else if(line[i] == ' ')
            {
                putchar(m[str]);
                str = "";
            }
            else str += line[i];
        }
        if(str.ln) putchar(m[str]);
        pf("\n");
    }

//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
