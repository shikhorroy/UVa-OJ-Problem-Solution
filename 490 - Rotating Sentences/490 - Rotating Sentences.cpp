#include<bits/stdc++.h>
int main()
{
    int max;
    int total_input;
    int i, j, array[100];
    char input[100][100];
    max = i = 0;
    while(gets(input[i]))
    {
        array[i] = strlen(input[i]);
        if(array[i] > max)
            max = array[i];
        i++;
    }
    total_input = i;
    for(i = 0; i < max; i++)
    {
        for(j = (total_input-1); j >= 0; j--)
        {
            if(i < array[j])
                printf("%c",input[j][i]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

