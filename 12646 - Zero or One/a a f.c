#include<stdio.h>
int main()
{
    int A, B, C;
    int sum = 0;
    while(scanf("%d%d%d",&A, &B, &C) != EOF){
        if(A == B && B == C) printf("*\n");
        else if(A == B) printf("C\n");
        else if(B == C) printf("A\n");
        else printf("B\n");
    }
    return 0;
}
