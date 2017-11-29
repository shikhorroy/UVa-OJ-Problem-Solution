/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge: POJ
     Problem name: Tri Tiling
     Imp. Algorithm:
**/
using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

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
#ifndef ONLINE_JUDGE
    freopen("TT.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int n, GG[31];
    GG[0] = 1;
    GG[2] = 3;
    GG[1] = GG[3] = 0;

    for (int g = 4; g < 31; g++)
    {
        GG[g] = 4 * GG[g - 2] - GG[g - 4];
    }

    while (sf("%d", &n) == 1)
    {
        if (n == -1)
            break;
        pf("%d\n", GG[n]);
    }

    return 0;
}
