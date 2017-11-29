#include<stdio.h>
#include<string.h>
int main()
{
    int a[105],i,t,n,sum;
    char s[20];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            sum=0;
            scanf("%d\n",&n);
            i=1;
            while(n--)
            {
                gets(s);
                if(s[0]=='L') a[i]=-1;
                else if(s[0]=='R') a[i]=1;
                else
                {
                    int k=0;
                    int l=strlen(s);
                    int j=l-2;
                    while(j<l)
                    {
                        if(s[j]>='0'&&s[j]<='9')
                        {
                            k=k*10+(s[j]-'0');
                        }
                        j++;
                    }
                    a[i]=a[k];
                }
                sum+=a[i];
                i++;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
