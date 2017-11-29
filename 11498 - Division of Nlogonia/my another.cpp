#include<stdio.h>
int main()
{
    int k, m, n, x, y;
    while(scanf("%d",&k)){
        if(k == 0)  break;
        scanf("%d %d",&m,&n);
        while(k--){
            scanf("%d%d",&x,&y);
            if(x == m || y == n){
                printf("divisa\n"); continue;
            }
            else if(x > m){
                if(y > n){
                    printf("NE\n"); continue;
                }
                printf("SE\n"); continue;
            }
            if(y > n){
                printf("NO\n"); continue;
            }
            printf("SO\n");
        }
    }
    return 0;
}
