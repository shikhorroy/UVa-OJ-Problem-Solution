#include<stdio.h>
#include<math.h>

int prime(long a)
{
    long x, i;
    if(a == 2)
        return 1;
    if(a % 2 == 0)
        return 0;
    x = (long)(sqrt (a));
    for(i = 3; i <= x; i = i + 2)
    {
        if(i == a)
            return 1;
        if(a % i == 0)
            return 0;
    }
    return 1;
}
long revers(long a)
{
    int i = 0;
    long b = a;
    while(b)
    {
        b = b / 10;
        i++;
    }
    while(a)
    {
        i--;
        b = b + (long)pow(10, i) * (a%10);
        a = a / 10;
    }
    return b;
}
int main()
{
    long num, x;
    while(scanf("%ld",&num) != EOF)
    {
        if(prime(num))
        {
            x = revers(num);
            if(prime(x) && x != num)
                printf("%ld is emirp.\n",num);
            else
                printf("%ld is prime.\n",num);
        }
        else
            printf("%ld is not prime.\n",num);
    }
    return 0;
}
