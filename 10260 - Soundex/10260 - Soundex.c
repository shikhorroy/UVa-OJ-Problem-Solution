#include<stdio.h>
int main()
{
    int flag,temp;
    int value;
    char ch;
    temp=0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='\n')
        {
            printf("\n");
            temp=flag=0;
        }
        else if(ch=='R')
        {
            flag=1;
            value=6;
        }
        else if(ch=='L')
        {
            flag=2;
            value=4;
        }
        else if(ch=='M'||ch=='N')
        {
            flag=3;
            value=5;
        }
        else if(ch=='D'||ch=='T')
        {
            flag=4;
            value=3;
        }
        else if(ch=='C'||ch=='G'||ch=='J'||ch=='K'||ch=='Q'||ch=='S'||ch=='X'||ch=='Z')
        {
            flag=5;
            value=2;
        }
        else if(ch=='B'||ch=='F'||ch=='P'||ch=='V')
        {
            flag=6;
            value=1;
        }
        else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='H'||ch=='W'||ch=='Y')
        {
            temp=flag=0;
        }
        if(temp!=flag)
        {
            printf("%d",value);
            temp=flag;
        }
    }
    return 0;
}
