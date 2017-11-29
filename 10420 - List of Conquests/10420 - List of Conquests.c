#include<stdio.h>
#include<string.h>
char name [2000][100],temp[1000],srt[2000][100];
int count[2000];
int main()
{
    int i,n,j;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
        gets(temp);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }

        }
    }

    strcpy(srt[0],name[0]);
    count[0]=1;j=0;

    for(i=1;i<n;i++)
    {
        if(strcmp(name[i],name[i-1])==0)
        {
            count[j]++;
        }
        else
        {
            j++;
            count[j]++;
            strcpy(srt[j],name[i]);
        }


    }
    for(i=0;i<=j;i++)
        printf("%s %d\n",srt[i],count[i]);

    return 0;
}
