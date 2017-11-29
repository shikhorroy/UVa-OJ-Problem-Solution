using namespace std;
#include<bits/stdc++.h>

#define maxElem 81
char str[maxElem];

int main(void)
{

#ifdef SHUVRO
    freopen("in.in", "r", stdin);
#endif // SHUVRO
    int cnum; scanf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        int ans = 0, tot = 0;
        scanf("%s", str);

        if(str[0] == 'O')
        {
            ans += ++tot;
        }
        for(int i = 1; str[i]; i++)
        {
            if(str[i] == 'O')
            {
                ans += ++tot;
            }
            else if(str[i] == 'X')
            {
                tot = 0;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
