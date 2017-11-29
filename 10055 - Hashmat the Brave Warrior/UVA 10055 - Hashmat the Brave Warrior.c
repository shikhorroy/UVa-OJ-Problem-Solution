#include<stdio.h>
int main()
{
    unsigned long a,b,hasmot,enemy;
    while((scanf("%lu %lu",&a,&b))!=EOF)
    {
        if(a > b)
        {
            enemy = a;
            hasmot = b;
        }else{
            enemy = b;
            hasmot = a;
        }
        printf("%lu\n",(enemy-hasmot));
    }
    return 0;
}
