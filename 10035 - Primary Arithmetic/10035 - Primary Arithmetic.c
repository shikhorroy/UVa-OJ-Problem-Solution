#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    int count;
    int checker;
    int big_length,sml_length;
    int sum,temp,length1,length2;
    char num1[15],num2[15],temp_str[15];
    while(scanf("%s%s",num1,num2))
    {
        if(num1[0]=='0'&&num2[0]=='0')
            break;
        temp=sum=count=checker=0;
        length1=strlen(num1);
        length2=strlen(num2);

        if(length1>=length2)
            big_length=length1,sml_length=length2;
        else
        {
            big_length=length2,sml_length=length1;
            strcpy(temp_str,num1);
            strcpy(num1,num2);
            strcpy(num2,temp_str);
        }

        for(i=(big_length-1),j=(sml_length-1);i>=0;i--,j--)
        {
            if(checker==1)
            {
                for(;i>=0;i--)
                {
                    sum=((num1[i]-'0')+temp);
                    if(sum>9)
                        count++,temp=1;
                    else
                        temp=0;
                }
                break;
            }
            if(j!=0)
            {
                sum=((((num1[i]-'0')+(num2[j]-'0')))+temp);
                if(sum>9)
                    count++,temp=1;
                else
                    temp=0;
            }
            else
            {
                sum=((((num1[i]-'0')+(num2[j]-'0')))+temp);
                if(sum>9)
                    count++,temp=1;
                else
                    temp=0;
                checker=1;
            }
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",count);
    }
    return 0;
}
