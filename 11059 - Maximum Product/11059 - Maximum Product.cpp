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
    FREAD("input.txt");
    int n, cs = 1;;
    while(sf("%d", &n) == 1)
    {
        int iArr[n];
        for(int i = 0; i < n; ++i){
            sf("%d", &iArr[i]);
        }
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            long long mult = 1LL;
            for (int j = i; j < n; ++j) {
                mult *= iArr[j] * 1LL;
                ans = max(ans, mult);
            }
        }

        printf("Case #%d: The maximum product is %lld.\n\n", cs++, ans);
    }
    return 0;
}
