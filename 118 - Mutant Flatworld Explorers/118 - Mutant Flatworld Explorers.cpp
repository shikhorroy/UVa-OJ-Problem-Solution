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

#define MAX 10000007
#define PI acos(-1.0)
#define int64 long long
#define pb push_back
#define sf scanf
#define pf printf
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
inline int get_index(char dir)
{
    if(dir == 'E') return 0;
    if(dir == 'N') return 1;
    if(dir == 'W') return 2;
    if(dir == 'S') return 3;
}
inline char get_dir(int index)
{
    if(index == 0) return 'E';
    if(index == 1) return 'N';
    if(index == 2) return 'W';
    if(index == 3) return 'S';
}
int main()
{
    //READ("118 - Mutant Flatworld Explorers.in");
    int fx, fy;
    char dir;
    int rx, ry;
    string input;
    map<pair<int, int>, int>m;
    sf("%d %d",&fx, &fy);
    while(sf("%d %d %c\n",&rx, &ry, &dir) != EOF)
    {
        getline(cin,input);
        int l = input.length();
        int index = get_index(dir);
        bool flag = false;
        for(int i = 0; i < l; i++)
        {
            if(input[i] == 'R') index = (index + 3) % 4;
            else if(input[i] == 'L') index = (index + 5) % 4;
            else if(input[i] == 'F')
            {
                rx += dx[index];
                ry += dy[index];
                if(rx < 0 || rx > fx || ry < 0 || ry > fy)
                {
                    rx -= dx[index];
                    ry -= dy[index];
                    pair<int, int>pii;
                    pii = make_pair(rx, ry);
                    if(m.find(pii) == m.end()) m[pii] = 0;
                    else continue;
                    flag = true;
                    break;
                }
            }
        }
        dir = get_dir(index);
        pf("%d %d %c",rx, ry, dir);
        if(flag) pf(" LOST\n");
        else pf("\n");
    }
    return 0;
}
