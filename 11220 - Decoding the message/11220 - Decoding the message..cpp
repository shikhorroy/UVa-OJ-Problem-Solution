#include<stdio.h>
#include<string.h>
char line[10000], ans[35], *ptr;
int pos, tail;
int cnum, tnum=0;
int main()
{
    scanf("%d",&cnum);
    gets(line);
    gets(line);
    while(cnum--)
    {
        tnum++;
        printf("Case #%d:\n",tnum);
        while(gets(line) && line[0])
        {
            ptr = strtok(line," ");
            pos = tail = 0;
            while(ptr!=NULL)
            {
                if(strlen(ptr) > pos)
                    ans[tail++] = *(ptr+pos),pos++;
                ptr = strtok(NULL," ");
            }
            ans[tail] = 0;
            puts(ans);
        }
        if(cnum) putchar('\n');
    }
    return 0;
}
