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

int counter(int a, int b, int c, int d, int L)
{
    int ans = 0;
    for (int x = 0; x <= L; x++)
    {
        int y = a * x * x + b * x + c;
        if (y % d == 0) ans++;
    }
    return ans;
}
int main()
{
//    FREAD("input.txt");
    int a, b, c, d, L;
    while(sf("%d %d %d %d %d", &a, &b, &c, &d, &L))
    {
        if (!a && !b && !c && !d && !L) break;
        pf("%d\n", counter(a, b, c, d, L));
    }
    return 0;
}


