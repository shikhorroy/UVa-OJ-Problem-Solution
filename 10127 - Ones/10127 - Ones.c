#include<stdio.h>
#include<string.h>
int main()
{
    int l,one,in_num,N,mod;
    while(scanf("%d",&in_num)!=EOF)
    {
        N=mod=one=1;
        while(mod!=0)
        {
            if(N<in_num)
            {
                N=(N*10+1);
                one++;
            }
            else
            {
                mod=(N%in_num);
                N=mod;
            }
        }
        printf("%d\n",one);
    }
    return 0;
}
