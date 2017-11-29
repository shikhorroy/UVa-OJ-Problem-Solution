#include<stdio.h>
int main()
{
    int A, B, C;
    int sum = 0;
    while(scanf("%d",&A) != EOF){
        if(A){
            scanf("%d",&B);
            if(B){
                scanf("%d",&C);
                if(C)   printf("*\n");
                else    printf("C\n");
            }else{
                scanf("%d",&C);
                if(C)   printf("B\n");
                else    printf("A\n");
            }
        }else{
            scanf("%d",&B);
            if(B){
                scanf("%d",&C);
                if(C)   printf("A\n");
                else    printf("B\n");
            }
            else{
                scanf("%d",&C);
                if(C)   printf("C\n");
                else    printf("*\n");
            }
        }
    }
    return 0;
}
