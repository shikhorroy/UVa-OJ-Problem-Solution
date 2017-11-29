#include<stdio.h>
int main()
{
    int A, B, C;
    int sum = 0;
    while(scanf("%d%d%d",&A, &B, &C) != EOF){
        sum = A + B + C;
        if(sum == 1){
            printf("%c\n",(A ? 'A' : B ? 'B' : 'C' ));
            continue;
        }
        if(sum == 2){
            printf("%c\n",(!A ? 'A' : !B ? 'B' : 'C' ));continue;
        }
        printf("*\n");
    }
    return 0;
}
