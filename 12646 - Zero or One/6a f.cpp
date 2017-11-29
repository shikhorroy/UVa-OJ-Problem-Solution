#include<stdio.h>
int main()
{
    int A, B, C;
    int sum = 0;
    while(scanf("%d%d%d",&A,&B,&C) != EOF){
        if(A){
            if(B){
                if(C)   printf("*\n");
                else    printf("C\n");
            }else{
                if(C)   printf("B\n");
                else    printf("A\n");
            }
        }else{
            if(B){
                if(C)   printf("A\n");
                else    printf("B\n");
            }
            else{
                if(C)   printf("C\n");
                else    printf("*\n");
            }
        }
    }
    return 0;
}
