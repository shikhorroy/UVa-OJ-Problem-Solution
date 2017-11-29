#include<stdio.h>
int main()
{
    unsigned long num1,num2;
    while((scanf("%lu%lu",&num1,&num2))!=EOF)
        printf("%lu\n",(num1^num2));
    return 0;
}
