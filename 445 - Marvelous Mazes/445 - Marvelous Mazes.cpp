#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int sum = 0;
    while(scanf("%c",&ch) != EOF){
        if(ch >= '0' && ch <= '9')
            sum += (ch - '0');
        else if(ch == 'b'){
            if(sum) for(int i = 0 ; i < sum; i++)    printf(" ");
            else printf(" ");
            sum = 0;
        }else if(ch == '!'){
            if(sum) for(int i = 0 ; i < sum; i++)    printf("\n");
            else printf("\n");
            sum = 0;
        }else if(ch >= 'A' && ch <= 'Z' || ch == '*' || ch == ' '){
            if(sum) for(int i = 0 ; i < sum; i++)    printf("%c",ch);
            else printf("%c",ch);
            sum = 0;
        }else printf("%c",ch);
    }
    return 0;
}
