#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    unsigned long long array[3];
    while(scanf("%llu%llu%llu",&array[0],&array[1],&array[2]))
    {
         if(array[0]==0&&array[1]==0&&array[2]==0)
            break;
        sort(array,array+3);
        if(((array[0]*array[0])+(array[1]*array[1]))==(array[2]*array[2]))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
