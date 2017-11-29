#include<stdio.h>
int main()
{
    int big,small;
    int substruct1,substruct2;
    int totalChanel=100;
    int present, want2see;

    while((scanf("%d%d",&present,&want2see)), present!=-1 && want2see!=-1)
    {
        if(present>want2see)
            big=present,small=want2see;
        else
            small=present,big=want2see;
        substruct1=(big-small),substruct2=(totalChanel+small)-big;
        if(substruct1<substruct2)
            printf("%d\n",substruct1);
        else
            printf("%d\n",substruct2);
    }

    return 0;
}
