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
map<char, char> m;

string line;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string r = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

bool is_mirr(string a)
{
    int l = a.length();
    for(int i = 0; i <= l / 2; i++)
    {
        if(a[l - 1 - i] != m[a[i]])
            return false;
    }
    return true;
}

bool is_palin(string a)
{
    int l = a.length();
    for(int i = 0; i < l / 2; i++)
    {
        if(a[l - i - 1] != a[i])
            return false;
    }
    return true;
}

int main()
{
//    READ("in.txt");
    for(int i = 0; i < s.length(); i++)
        m[s[i]] = r[i];

    while(cin >> line)
    {
        bool mr = is_mirr(line);
        bool pa = is_palin(line);

        if(!mr && !pa)
            printf("%s -- is not a palindrome.\n", line.c_str());
        else if(!mr && pa)
            printf("%s -- is a regular palindrome.\n", line.c_str());
        else if(mr && !pa)
            printf("%s -- is a mirrored string.\n", line.c_str());
        else
            printf("%s -- is a mirrored palindrome.\n", line.c_str());
        printf("\n");
    }
}
