using namespace std;
#include<bits/stdc++.h>

#define maxx 1000050
int player[maxx], mapp[111];

int main()
{
//    freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int a, b, c;
    int cnum; scanf("%d", &cnum);

    for(int cs = 1; cs <= cnum; cs++)
    {
        scanf("%d %d %d", &a, &b, &c);

        for(int i = 1 ; i <= a; i++) player[i] = 1;
        for(int i = 1; i <= 110; i++) mapp[i] = i;

        for(int i = 1, x, y; i <= b; i++)
        {
            scanf("%d %d", &x, &y);
            mapp[x] = y;
        }
        bool flag = true;
        for(int i = 1, x, p = 0; i <= c; i++, p++)
        {
            scanf("%d", &x);
            if(flag)
            {
                int cal = p % a + 1;

                if(mapp[player[cal] + x] >= 100)
                {
                    player[cal] = 100;
                    flag = false;
                }
                else
                    player[cal] = mapp[player[cal] + x];
            }
        }

        for(int i = 1; i <= a; i++)
        {
            printf("Position of player %d is %d.\n", i, min(player[i], 100));
        }
    }
    return 0;
}
