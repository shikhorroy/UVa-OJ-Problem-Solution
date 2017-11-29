#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
long age[2000005];
int main()
{
    long i,n;
    while (scanf("%ld",&n))
    {
        if (n==0)
            break;

        for (i=0;i<n;i++)
            scanf("%ld",&age[i]);

        sort(age,age+n);

        for (i=0;i<n;i++)
        {
            printf("%ld",age[i]);
            if(i<(n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}



