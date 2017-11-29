#include<bits/stdc++.h>
int main()
{
    long i;
    long length;
    char strng[100000];

    while((gets(strng)))
    {
        length=strlen(strng);
        for(i=0;i<length;i++)
            printf("%c",(strng[i]-7));
        printf("\n");
    }
    return 0;
}
