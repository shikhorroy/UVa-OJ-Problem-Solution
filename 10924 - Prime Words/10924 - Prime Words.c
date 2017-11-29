#include<stdio.h>
#include<string.h>
int isprime(int num);
int main()
{
    int i,sum;
    char word[25];
    while((scanf("%s",word))!=EOF)
    {
        sum=0;
        for(i=0;i<strlen(word);i++)
        {
            if(word[i]>='a' && word[i]<='z')
                sum+=(word[i]-'a'+1);
            else if(word[i]>='A' && word[i]<='Z')
                sum+=(word[i]-'A'+27);
        }
        if(isprime(sum))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
int isprime(int num)
{
    int i,checker=1;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
         {
             checker=0;
                break;
         }
    }
    return checker;
}
