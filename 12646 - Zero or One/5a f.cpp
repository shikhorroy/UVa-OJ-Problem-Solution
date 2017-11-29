#include<stdio.h>
int main()
{
    int A, B, C;
    int sum = 0;
    while(scanf("%d%d%d",&A, &B, &C) != EOF){
        if(A == B){
            if(A != C){
                printf("C\n");continue;
            }
            printf("*\n");
        }
        else if(B == C){
            if(B != A){
                printf("A\n");continue;
            }
            printf("*\n");
        }
        else{
            if(A != B){
                printf("B\n");continue;
            }
            printf("*\n");
        }
    }
    return 0;
}
