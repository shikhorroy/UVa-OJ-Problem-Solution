/*
    Coder: Shikhor Roy.
     CSE - 2012, HSTU.
*/
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
#define TEST int cnum; sf("%d", &cnum); REP(cs, 1, cnum)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
int dx[]={1, 1, 0, -1, -1, -1,  0,  1};
int dy[]={0, 1, 1,  1,  0, -1, -1, -1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int m, n, outputX, outputY;
string input[55], str;
bool is_valid(int posX, int posY)
{
    return (posX >= 0 && posX <= m - 1 && posY >= 0 && posY <= n - 1);
}
bool is_found(int index, int x, int y, int loop)
{
//    cout << "called" << endl;
    for(int i = 0; i < loop;x += dx[index], y += dy[index], i++)
    {
        if(tolower(input[x][y]) != tolower(str[i])) return false;
    }
    return true;
}
void find_string_position()
{
    int strLength = str.ln;

    REP(x, 0, m - 1)
    REP(y, 0, n - 1)
    {
        outputX = x + 1;
        outputY = y + 1;

        int rightX = x, rightY = y + strLength - 1;
        if(is_valid(rightX, rightY)){
            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[rightX][rightY]) == tolower(str[strLength - 1]))
            {
//                cout << x << " " << y << " " << rightX << " " << rightY << endl;
//                cout << (char)tolower(input[x][0]) << (char)tolower(str[0]) <<
//                (char)tolower(input[rightX][rightY]) << (char)tolower(str[strLength - 1]) << endl;
//                cout << "called 1." << endl;
                int index = 2;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }

        int leftX = x, leftY = y - strLength + 1;
        if(is_valid(leftX, leftY)){
            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[leftX][leftY]) == tolower(str[strLength - 1]))
            {
//                cout << "called 2." << endl;
                int index = 6;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }

        int upX = x - strLength + 1, upY = y;
        if(is_valid(upX, upY)){
            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[upX][upY]) == tolower(str[strLength - 1]))
            {
//                cout << "called 3." << endl;
                int index = 4;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }

        int downX = x + strLength - 1, downY = y;

//        cout << downX << " " << downY << endl;
        if(is_valid(downX, downY)){

//            cout << x << " " << y << " " << downX << " " << downY << endl;
//            cout << (char)tolower(input[x][y]) << (char)tolower(str[0]) <<
//            (char)tolower(input[downX][downY]) << (char)tolower(str[strLength - 1]) << endl;

            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[downX][downY]) == tolower(str[strLength - 1]))
            {
//                cout << "called 4." << endl;
                int index = 0;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }

        int upRightX = x - strLength + 1, upRightY = y + strLength - 1;
        if(is_valid(upRightX, upRightY)){
            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[upRightX][upRightY]) == tolower(str[strLength - 1]))
            {
//                cout << "called 5." << endl;
                int index = 3;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }

        int downLeftX = x + strLength - 1, downLeftY = y - strLength + 1;
        if(is_valid(downLeftX, downLeftY)){
            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[downLeftX][downLeftY]) == tolower(str[strLength - 1]))
            {
//                cout << "called 6." << endl;
                int index = 7;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }

        int upLeftX = x - strLength + 1, upLeftY = y - strLength + 1;
        if(is_valid(upLeftX, upLeftY)){
            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[upLeftX][upLeftY]) == tolower(str[strLength - 1]))
            {
//                cout << "called 7." << endl;
                int index = 5;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }

        int downRightX = x + strLength - 1, downRightY = y + strLength - 1;
        if(is_valid(downRightX, downRightY)){
            if(tolower(input[x][y]) == tolower(str[0])
            && tolower(input[downRightX][downRightY]) == tolower(str[strLength - 1]))
            {
//                cout << "called 8." << endl;
                int index = 1;
                if(is_found(index, x, y, strLength - 1)) return;
            }
        }
    }
}
int main()
{
//    READ("in.in");
//    double cl = clock();
    bool line = false;
    TEST
    {
        if(line) pf("\n");line = true;
        sf("%d%d", &m, &n);
        REP(i, 1, m){
            cin >> input[i - 1];
//            cout << "Input: " << input[i - 1] << endl;
        }

        int check;
        sf("%d", &check);
        bool flag = false;
        REP(i, 1, check)
        {
            cin >> str;
//            cout << "STR: " <<str << endl;
            find_string_position();
            if(flag) puts("");flag = true;
            pf("%d %d", outputX, outputY);
        }
        pf("\n");
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}

