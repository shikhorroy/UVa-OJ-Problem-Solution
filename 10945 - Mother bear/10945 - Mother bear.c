#include<stdio.h>
int main()
{
    int i,j;
    char store1[500],store2[500];
    char input[500];
    while(gets(input),strcmp(input,"DONE"))
    {
        for(i=0,j=0;i<strlen(input);i++)
        {
            if(isalpha(input[i]))
                if(islower(input[i]))
                {
                    store1[j]=input[i];
                    j++;
                }
                else
                {
                    store1[j]=tolower(input[i]);
                    j++;
                }
        }
        store1[j]='\0';
        for(i=0,j=(strlen(store1)-1);j>=0;i++,j--)
            store2[i]=store1[j];
        store2[i]='\0';
        if(!strcmp(store1,store2))
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
