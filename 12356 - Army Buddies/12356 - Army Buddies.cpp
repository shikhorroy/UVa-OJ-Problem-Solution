using namespace std;
#include<bits/stdc++.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("AB.txt", "r", stdin);
#endif // ONLINE_JUDGE
#define MAX 100004
    int s, b, LS[MAX], RS[MAX];
    while(scanf("%d %d", &s, &b), s || b)
    {
        for(int i = 0; i <= s; ++i)
        {
            LS[i] = i - 1;
            RS[i] = i + 1;
        }
        int L, R;
        for(int i = 1; i <= b; ++i)
        {
            scanf("%d %d", &L, &R);
            if(LS[L] == 0) printf("*");
            else printf("%d", LS[L]);
            if(RS[R] > s) printf(" *\n");
            else printf(" %d\n", RS[R]);
            LS[RS[R]] = LS[L];
            RS[LS[L]] = RS[R];
        }
        printf("-\n");
    }
    return 0;
}
