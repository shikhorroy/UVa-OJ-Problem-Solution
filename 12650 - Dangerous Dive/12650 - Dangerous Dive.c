#include<stdio.h>
#define MAX 1001
int main()
{
    int R, N, x;
    char str[MAX];
    while(scanf("%d%d\n",&R,&N) != EOF){
        int vol[MAX] = {0};
        if(R == N){
            gets(str);
            printf("*\n");continue;
        }
        while(N--){
            scanf("%d",&x);
            vol[x] = 1;
        }
        for(int i = 1; i <= R; i++){
            if(vol[i] == 0) printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
