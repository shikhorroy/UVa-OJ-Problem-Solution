#include<stdio.h>
int main()
{
    int A, B, C, sum;
    while(scanf("%d%d%d",&A, &B, &C) != EOF){
        if(A == B && B == C)    printf("*\n");
        else if(A == 0 && B == 1 && C == 1 || A == 1 && B == 0 && C == 0)    printf("A\n");
        else if(A == 0 && B == 1 && C == 0 || A == 1 && B == 0 && C == 1)    printf("B\n");
        else printf("C\n");
    }
    return 0;
}
