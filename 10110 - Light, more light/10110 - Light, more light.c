#include<stdio.h>
#include<math.h>
int main()
{
    long long n;
    long  long num;
    while(scanf("%lld",&num),num!=0)
    {
        n=sqrt(num);
        if((n*n)==num)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
