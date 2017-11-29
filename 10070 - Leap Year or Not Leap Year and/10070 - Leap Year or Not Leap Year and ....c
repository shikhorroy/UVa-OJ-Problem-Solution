#include<stdio.h>
#include<string.h>
char str[10000];
int main()
{
    int i,flag=0;
    int num,l_y,h_y,b_y;
    int length,sum1,sum2;
    while(scanf("%s",str)!=EOF)
    {
        if(flag>0)
            printf("\n");
        num=l_y=h_y=b_y=0;
        length=strlen(str);
        /*For Leap year*/
        if(str[length-1]=='0'&&str[length-2]=='0')
        {
            num=(str[length-3]-'0')+((str[length-4]-'0')*10);
            if(num%4==0)
            {
                printf("This is leap year.\n");
                l_y=1;
            }
        }
        else
        {
            num=(str[length-1]-'0')+((str[length-2]-'0')*10);
            if(num%4==0)
            {
                printf("This is leap year.\n");
                l_y=1;
            }
        }
        /*For Hulukulu*/
        if(str[length-1]=='0'||str[length-1]=='5')
        {
            sum1=sum2=0;
            for(i=0;i<length;i+=2)
                sum1+=(str[i]-'0');
            for(i=1;i<length;i+=2)
                sum2+=(str[i]-'0');
            if((sum1+sum2)%3==0)
            {
                printf("This is huluculu festival year.\n");
                h_y=1;
            }
            if(((sum1-sum2)%11==0)&&l_y==1)
            {
                printf("This is bulukulu festival year.\n");
                b_y=1;
            }
        }
        if(l_y==0&&h_y==0&&b_y==0)
            printf("This is an ordinary year.\n");
        flag=1;
    }
    return 0;
}
