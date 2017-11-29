#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
#include<iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

using namespace std;

#define MAX 25
#define PI acos(-1.0)

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <string, int> msi;

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
#define space(n) pf("%*c",n,' ')
#define zero(n) REP(i,1, n) pf("0")

int l;
void soundex_func(string str)
{
    map<char, int> m;
    m['B'] = m['P'] = m['F'] = m['V'] = 1;
    m['C'] = m['S'] = m['K'] = m['G'] = m['J'] = m['Q'] = m['X'] = m['Z'] =  2;
    m['D'] = m['T'] = 3;
    m['L'] = 4;
    m['M'] = m['N'] = 5;
    m['R'] = 6;
    int tDigit = 0;
    pf("%c",str[0]);
    REP(i, 1, l-1)
    {
        if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
           str[i] != 'Y' && str[i] != 'W' && str[i] != 'H' && m[str[i]] != m[str[i-1]])
        {
            pf("%d",m[str[i]]);
            tDigit++;
        }
        if(tDigit == 3)
        return;
    }
    zero(3 - tDigit);
}
int main()
{
//    READ("in.txt");
    space(9);pf("NAME");space(21);pf("SOUNDEX CODE\n");
    string name;
    while(in(name))
    {
        l = name.ln;
        space(9);out(name);space(25 - l);soundex_func(name);pf("\n");
    }
    space(19);pf("END OF OUTPUT\n");
    return 0;
}

