#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1005
#define sf scanf
#define pf printf
int max(int a, int b);

int lcs(int X[],int Y[],int m,int n)
{
   int L[m +1][n + 1];
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}

int max(int a, int b){ return (a > b)? a : b;}

int main()
{
    int x, y;
    int X[MAX], Y[MAX];
    int cnum = 0;
    while(sf("%d%d",&x,&y),(x != 0 && y != 0))
    {
        for(int i = 0; i < x; i++)  sf("%d",&X[i]);
        for(int i = 0; i < y; i++)  sf("%d",&Y[i]);
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",++(cnum),lcs(X,Y,x,y));
    }
    return 0;
}
