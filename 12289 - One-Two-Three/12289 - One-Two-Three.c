# include <stdio.h>
# include <string.h>
int main()
{
    int i;
    int N;
    char strng[10];

    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%s",strng);
        if(strlen(strng)==5)
            printf("3\n");
        else if((strng[0]=='o' && strng[1]=='n')    ||  (strng[0]=='o' && strng[2]=='e')    ||  (strng[1]=='n' && strng[2]=='e'))
            printf("1\n");
        else
            printf("2\n");
    }

    return 0;
}
