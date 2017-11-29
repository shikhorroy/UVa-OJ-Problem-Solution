#include<stdio.h>
int main()
{
    long store[50];
    long num,i,count;
    while((scanf("%ld",&num)),num!=0)
    {
        i=0;
        count=0;
        while(num>0)
        {
            i++;
            if(store[i]=num%2)
                count++;
            num/=2;
        }
        printf("The parity of ");
        for(;i>0;i--)
            printf("%ld",store[i]);
        printf(" is %ld (mod 2).\n",count);
    }
    return 0;
}
