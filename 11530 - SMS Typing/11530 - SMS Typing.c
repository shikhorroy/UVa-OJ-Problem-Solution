#include<stdio.h>
#include<string.h>
#include<ctype.h>
int send(char *string,int num);
int main()
{
    int t,i,index,value;
    char c,str[150];
    scanf("%d%*c",&t);
    for(i=1;i<=t;i++)
    {
        index=0;
        while((scanf("%c",&c)),c!='\n')
        {
            str[index]=c;
            index++;
        }
        str[index]='\0';
        value=send(str,strlen(str));
        printf("Case #%d: %d\n",i,value);
    }
    return 0;
}

int send(char *string,int num)
{
    int i,sum=0;
    for(i=0;i<num;i++)
    {
        if((islower(string[i])) || (string[i]==' '))
        {
            if(string[i]=='s' || string[i]=='z')
                sum+=4;
            else if(string[i]==' ')
                sum+=1;
            else if((string[i]>='a' && string[i]<='r'))
            {
                if(string[i]%3==0)
                    sum+=3;
                else
                    sum+=(string[i]%3);
            }
            else if(string[i]>='t' && string[i]<='y')
            {
                if(string[i]%3==2)
                    sum+=1;
                else
                    sum+=((string[i]%3)+2);
            }
        }
    }
    return sum;
}
