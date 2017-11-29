#include<stdio.h>
int main()
{
    long numerator,denominator,mod;
    while(scanf("%ld%ld",&numerator,&denominator)!=EOF)
    {
        mod=numerator%denominator;
        printf("[%ld;",(numerator/denominator));
        while(mod!=0)
        {
            numerator=denominator;
            denominator=mod;
            mod=numerator%denominator;
            if(mod!=0)
                printf("%ld,",(numerator/denominator));
            else
                printf("%ld",(numerator/denominator));
        }
        printf("]\n");
    }
    return 0;
}
