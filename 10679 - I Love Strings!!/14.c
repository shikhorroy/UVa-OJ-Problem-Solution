#include<stdio.h>
#include<string.h>
int main(){
    int i = 0, j, k, len, count;
    char s1[50], s2[50], s[50];
    scanf("%s%s",s1,s2);


    if(strlen(s1) > strlen(s2)) i = 60;
    len = strlen(s1);
    count = 0;
    for(; i < strlen(s2); i++){
        k = 0;
        if((strlen(s2) - i) < len)
            break;
        for( j =i; j < (i + len); j++){
            s[k] = s2[j];
            k++;
        }
        s[k] = '\0';
        if(!strcmp(s,s1))
            count++;
    }


    printf("OUTPUT: %d\n",count);
    return 0;
}
