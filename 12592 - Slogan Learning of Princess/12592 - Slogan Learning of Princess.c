#include<stdio.h>
int N, Q, i, j, k;
char input[105];
char in_str[23][105], out_str[23][105];
int main()
{
    scanf("%d%*c",&N);
    while(N--){
        gets(in_str[i]);
        gets(out_str[i]);
        i++;
    }
    scanf("%d%*c",&Q);
    while(Q--){
        gets(input);
        for(j = 0; j<i; j++){
            if(!(strcmp(input,in_str[j])))
            {
                printf("%s\n",out_str[j]);
                break;
            }
        }
    }
    return 0;
}

