using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

#define FREAD(f) freopen(f, "r", stdin)
#define FWRITE(f) freopen(f, "w", stdout)

#define DEBUG1(x) cout << "> " << #x << ": " << x << endl
#define DEBUG2(x, y) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << endl
#define DEBUG3(x, y, z) cout << "> " << #x << ": " << x << " > " << #y << ": " << y << " > " << #z << ": " << z << endl

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/


int main()
{
//    FREAD("input.txt");
//    FWRITE("output.txt");

    long long m, x;

    while(sf("%lld %lld", &m, &x))
    {
        if (m == 0 && x == 0) break;

        if (x == 100)
        {
            pf("Not found\n");
            continue;
        }
        long long ans = (m - 1) * 100 / (100 - x);
        ans -= ((100 - x) * ans == (m - 1) * 100);

//        DEBUG1(ans);
        if (ans < m) pf("Not found\n");
        else pf("%lld\n", ans);
    }
    return 0;
}


