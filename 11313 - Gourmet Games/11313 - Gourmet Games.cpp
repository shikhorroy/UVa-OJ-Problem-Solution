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
    int cases;
    sf("%d", &cases);
    for (int cs = 1; cs <= cases; cs++)
    {
        int m, n;
        sf("%d %d", &n, &m);

        int ans = 0;
        bool flag = true;
        while(true)
        {
            if (n < m)
            {
                flag = false;
                break;
            }
            ans += n / m;
            n = n / m + n % m;
            if (n == 1)
            {
                pf("%d\n", ans);
                break;
            }
        }
        if (!flag) pf("cannot do this\n");
    }
    return 0;
}


