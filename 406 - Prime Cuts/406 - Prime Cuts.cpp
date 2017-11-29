#include<stdio.h>
#include<math.h>
int prime[190];
int S, mid, i, beg, en;
int C, N, ck, m, k;
void func(){
    m = 1;
    prime[0] = 1;
    for(i = 2; i <= 1050; i++){
        ck = 1;
        for(k = 2;k<=sqrt(i);k++){
            if(i % k == 0){
                ck = 0;
                break;
            }
        }
        if(ck == 1){
            prime[m] = i;
            m++;
        }
    }
}
int main()
{
    func();
    //for(int i = 0; i < m; i++) printf("%d ",prime[i]);
    while(scanf("%d %d",&N,&C)!=EOF)
    {
        for(i=0;;i++)
        {
            if(N == prime[i])
                break;
            if(N < prime[i])
            {
                i--;
                break;
            }
        }
        mid=(i + 1)/2;
        if(i%2==0){
            S = ((C * 2) - 1);
            beg = (mid - (S - C));
            en = (mid + (S - C));
        }
        else{
            beg = (mid - C);
            en = (mid + C - 1);
        }
        printf("%d %d:",N,C);
        if(beg < 0 || en >i)
            for(int j = 0; j <= i; j++)
                printf(" %d",prime[j]);
        else
            for(int j = beg; j <= en; j++)
                printf(" %d",prime[j]);
        printf("\n\n");
    }
    return 0;
}
