#include<stdio.h>
int main()
{
    int A, B, C;
    while(scanf("%d%d%d",&A, &B, &C) != EOF){
        if(A == B){
            if(A == C){
                printf("*\n");
                continue;
            }
            else if(B != C) printf("C\n");
        }else if(B == C){
            printf("A\n");
        }else printf("B\n");
    }
    return 0;
}
