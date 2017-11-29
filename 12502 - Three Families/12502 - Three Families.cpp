#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int A, B, C, T;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d",&A,&B,&C);
        printf("%d\n",(C*(A+(A-B)))/(A+B));
    }
    return 0;
}
