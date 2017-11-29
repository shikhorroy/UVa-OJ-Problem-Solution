#include<stdio.h>
long GCD(long i,long j);
int main()
{
    long i,j;
    long G,N;
    while((scanf("%ld",&N)),N!=0)
    {
        G=0;
        for(i=1;i<N;i++)
            for(j=i+1;j<=N;j++)
                G+=GCD(i,j);
        printf("%ld\n",G);
    }
    return 0;
}
long GCD(long i,long j)
{
    long temp_i=i;
    i=j%i;
    while(i!=0)
    {
        j=temp_i;
        temp_i=i;
        i=j%i;
    }
    return temp_i;
}
