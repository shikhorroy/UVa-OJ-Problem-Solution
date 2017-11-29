#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<climits>

#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<utility>
#include<string>
#include<algorithm>

using namespace std;

#define int64 long long
#define uint64 unsigned long long
struct data
{
    int64 x, y;
    bool operator < (const data& d) const
    {
        return ((d.y - d.x) > (y - x));
    }
};

vector<data>v;

int main()
{
    int64 n, g, s, r;
    while(scanf("%lld%lld",&n,&g) != EOF)
    {
        data d;
        int64 res = 0, l;
        for(int64 i = 1; i <= n; i++)
        {
            scanf("%lld%lld",&s,&r);
            if(s > r)
            {
                res += 3;
                continue;
            }
            else if(s == r)
            {
                if(g)
                {
                    res += 3;
                    g--;
                }
                else res++;
                continue;
            }
            d.x = s;
            d.y = r;
            v.push_back(d);
        }
        sort(v.begin(), v.end());
        l = v.size();
        for(int64 i = 0; i < l; i++)
        {
            int64 need = v[i].y - v[i].x;
            if(g > need)
            {
                res += 3;
                g -= (need + 1);
            }
            else if(need == g)
            {
                res++;break;
            }
        }
        printf("%lld\n",res);
        v.clear();
    }
    return 0;
}
