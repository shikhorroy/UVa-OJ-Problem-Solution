#include<stdio.h>
#define ABS(x) (x > 0 ? x : -x)
int main()
{
    int testCase,num,result;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&num);
        result = ( num * 63+7492) * 5 - 498;
        result = ABS(result);
        printf("%d\n",(result%100)/10);
    }
    return 0;
}
