#include<stdio.h>
int main()
{
    char str[] = {'*', 'C', 'B', 'A', 'A', 'B', 'C', '*' };
    int A, B, C, sum;
    while(scanf("%d%d%d",&A, &B, &C) != EOF){
        sum = ((A*4) + (B*2) + C);
        printf("%c\n",str[sum]);
    }
    return 0;
}
