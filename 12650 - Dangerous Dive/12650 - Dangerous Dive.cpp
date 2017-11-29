#include<stdio.h>
#include<algorithm>
using namespace std;
#define MAX 1001
int main()
{
    int R, N, x, i, k, count, n;
    char str[MAX];
    while(scanf("%d%d\n",&R,&N) != EOF){
        if(R == N){
            gets(str);
            printf("*\n");continue;
        }
        int vol[MAX] = {0};
        count = 0;
        k = 0;
        n = N;
        while(N--){
            scanf("%d",&vol[k]); k++;
        }
        sort(vol, vol+k);
        N = N - 2;
        for(i = 0; i < N; i++){
            if(vol[i+1] - vol[i] != 1){
                for(k = vol[i]+1; i < vol[i+1]; k++)
                    printf("%d ",vol[i]);
                count += (vol[i+1] - vol[i] + 1);
                if(count == (R - n))    break;
            }
        }
        printf("\n");
    }
    return 0;
}
