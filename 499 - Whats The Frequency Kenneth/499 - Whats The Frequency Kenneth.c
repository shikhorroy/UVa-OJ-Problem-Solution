#include<stdio.h>
#include<string.h>
int array[128];
char str[10000];
int main()
{
    int max;
    int i,length,num;
    while(gets(str))
    {
        max=0;
        length=strlen(str);
        for(i=0;i<length;i++)
        {
            if(isalpha(str[i]))
            {
                num=(int)(str[i]);
                array[num]++;
                if(array[num]>max)
                    max=array[num];
            }
        }
        for(i=65;i<123;i++)
            if(array[i]==max)
                printf("%c",(char)i);
        printf(" %d\n",max);
        for(i=65;i<123;i++)
            array[i]=0;
    }
    return 0;
}
