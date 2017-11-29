#include<stdio.h>
#include<string.h>
char ch;
char str[105];
int N,Case,i,check;
int main()
{
    Case = 0;
    while(scanf("%d%*c",&N),N!=0)
    {
        check = 0;
        while(N--)
        {
            gets(str);
            if(check == 0)
            {
                printf("Case %d:\n#include<string.h>\n#include<stdio.h>\nint main()\n\{\nprintf(\"",++Case);
                check=1;
            }
            else
                printf("printf(\"");
            for(i=0;i<strlen(str);i++)
            {
                if(str[i]=='"')
                    printf("\\\"");
                else if(str[i] =='\\')
                    printf("\\\\");
                else
                    printf("%c",str[i]);
            }
            printf("\\n\");\n");
        }
        printf("printf(\"\\n\");\nreturn 0;\n}\n");
    }
    return 0;
}
