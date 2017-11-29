/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge:
     Problem name: 1209 - Wordfish
     Imp. Algorithm: , Complexity:
**/
using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

#define DEBUG1(x) pf("> %s: %d\n", #x, x)
#define DEBUG2(x, y) pf("> %s: %d > %s: %d\n", #x, x, #y, y)
#define DEBUG3(x, y, z) pf("> %s: %d > %s: %d > %s: %d\n", #x, x, #y, y, #z, z)

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("C.txt", "r", stdin);
#endif // ONLINE_JUDGE

#define mxn 25
    char str[mxn];
    while(gets(str))
    {
        int sz = strlen(str);
        for(int i = 0; i < 10; i++)
            prev_permutation(str, str + sz);

        int dist = 0;
        char ans[mxn];
        for(int i = 1; i <= 21; i++)
        {
            int d = INT_MAX;
            for(int i = 1; i < sz; i++){
                d = min(d, abs(str[i] - str[i - 1]));
            }

            if(d > dist)
            {
                dist = d;
                strcpy(ans, str);
            }
            next_permutation(str, str + sz);
//            pf("ans: ........ %s\n", ans);
        }
        printf("%s%d\n", ans, dist);
    }
    return 0;
}
