#include<stdio.h>
int main()
{
    long int num;
    while(scanf("%ld",&num),num!=0)
    {
        if(num<=100)
            printf("f91(%ld) = 91\n",num);
        else
            printf("f91(%ld) = %ld\n",num,(num-10));
    }
    return 0;
}
