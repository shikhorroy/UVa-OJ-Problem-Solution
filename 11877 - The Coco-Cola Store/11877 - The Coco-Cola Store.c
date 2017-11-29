#include<stdio.h>
int main()
{
    int n,count_coco_cola;
    int get,xtra;

    while((scanf("%d",&n)),n!=0)
    {
        count_coco_cola=0;

        while(n>2)
        {
            get=n/3;
            count_coco_cola+=get;
            xtra=n%3;
            n=get+xtra;
        }
        if( n==2)
            count_coco_cola++;

        printf("%d\n",count_coco_cola);
    }
    return 0;
}
