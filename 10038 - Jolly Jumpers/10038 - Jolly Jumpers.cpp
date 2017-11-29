#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
char ch;
int T,i, sub, check;
int array[3000], store[3000];
int main()
{
    while(scanf("%d",&T)!=EOF)
    {
        for(int j = 0;j<T ; j++)
            scanf("%d",&array[j]);
        if(T == 1)
           printf("Jolly\n");
        for(int j = 1;j<T;j++){
            sub = abs(array[j] - array[j-1]);
            if(sub >=T)
            {
                printf("Not jolly\n");
                check = 0;
                break;
            }
            if( store[sub] != 1)
                store[sub] = 1;
            else
            {
                printf("Not jolly\n");
                check = 0;
                break;
            }
            if(j == (T-1))
                check = 1;
        }
        if( check == 1){
            printf("Jolly\n");
            check = 0;
        }
        for(int j = 0;j<3000;j++)
            store[j] = 0;
    }
    return 0;
}
