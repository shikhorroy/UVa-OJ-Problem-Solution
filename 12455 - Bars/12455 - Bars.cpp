using namespace std;
#include<bits/stdc++.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Bars.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int cnum;
    int iArr[20];
    scanf("%d", &cnum);
    for(int cs = 1; cs <= cnum; cs++)
    {
        int n, p; scanf("%d %d", &n, &p);
        for(int i = 0; i < p; i++)
            scanf("%d", &iArr[i]);
        bool flag = true;
        for(int x = 0; x < (1 << p); x++)
        {
            int sum = 0;
            for(int i = 0; i < p; i++)
            {
                if(x & (1 << i))
                {
                    sum += iArr[i];
                }
            }
            if(sum == n)
            {
                flag = false;
                printf("YES\n");
                break;
            }
        }
        if(flag)
            printf("NO\n");
    }
    return 0;
}
