#include<stdio.h>
#include<algorithm>
using namespace std;
long num[10001];
int main()
{
    long i=0,result,temp;
    while(scanf("%ld",&num[i])!=EOF)
    {
        temp=i+1;
        sort(num,num+temp);
        if(i%2==0)
        {
            printf("%ld\n",num[i/2]);
        }
        else
        {
            result=((num[i/2]+num[temp/2])/2);
            printf("%ld\n",result);
        }
        i++;
    }
    return 0;
}
