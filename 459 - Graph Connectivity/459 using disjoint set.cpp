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

#define MAX 1000
#define PI acos(-1.0)
#define REP(i, b, e)\
for(int i = b; i <= e; i++)
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;

int par[MAX];
int components;
inline void make_set(int x)
{
    par[x] = x;
}
int find_par(int r)
{
    if(par[r] == r) return r;
    else return (par[r] = find_par(par[r]));
}
inline void make_union(int a, int b)
{
    int u = find_par(a);
    int v = find_par(b);
    if(u != v)
    {
        par[u] = v;
        components--;
    }
}
int main()
{
//    READ("in.txt");
    int cnum;
    si(cnum); getchar(); getchar();
    REP(i, 1, cnum)
    {
        if(i != 1)
            pf("\n");
        char ch;
        ch = getchar();
        getchar();
        int index = ch - 'A' + 1;
        string str;
        REP(j, 1, index)
        make_set(j);
        components = index;
        while(getline(cin, str), str.length())
        {
            char ch1 = str[0], ch2 = str[1];
            int u = ch1 - 'A' + 1, v = ch2 - 'A' + 1;
            make_union(v, u);
        }
        pf("%d\n",components);
    }
    return 0;
}
