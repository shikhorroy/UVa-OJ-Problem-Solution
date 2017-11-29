#include<bits/stdc++.h>
int main()
{
    long length;
    char strng[100000];

    while((gets(strng)))
    {
        length = strlen(strng);
        for(long i = 0; i < length; i++)
            printf("%c",(strng[i] - 7));
        printf("\n");
    }
    return 0;
}
