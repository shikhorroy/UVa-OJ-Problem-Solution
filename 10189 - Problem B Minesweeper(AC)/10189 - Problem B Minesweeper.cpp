#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define MAX 100
int main()
{
    char A[MAX][MAX];
    int c, r, cnum = 0;
    while(sf("%d%d%*c",&r,&c), (r != 0 && c != 0))
    {
        if(cnum)    pf("\n");
        int count[MAX][MAX] = {0};
        for(int i = 0, j; i < r; i++)
        {
            for(j = 0; j < c; j++) sf("%c",&A[i][j]);
            A[i][j] = '\0';
            getchar();
        }
        int up_i, down_i,
            left_j, right_j;
        for(int i = 0; i < r; i++)
        {
            up_i = i - 1, down_i = i + 1;
            for(int j = 0; j < c; j++)
            {
                left_j = j - 1, right_j = j + 1;
                if(A[i][j] == '*')
                {
                    ///For (i - 1)j
                    if(up_i >=0 && up_i < r)
                    {
                        if(left_j >=0 && left_j < c)
                        {
                            if(A[up_i][left_j] == '.')  count[up_i][left_j]++;
                        }
                        if(A[up_i][j] == '.')   count[up_i][j]++;
                        if(right_j >=0 && right_j < c)
                        {
                            if(A[up_i][right_j] == '.')     count[up_i][right_j]++;
                        }
                    }
                    ///For ij
                    if(left_j >=0 && left_j < c)
                    {
                        if(A[i][left_j] == '.')  count[i][left_j]++;
                    }
                    //if(A[i][j] == '.')   count[i][j]++;
                    if(right_j >=0 && right_j < c)
                    {
                        if(A[i][right_j] == '.')     count[i][right_j]++;
                    }
                    ///For (i + 1)j
                    if(down_i >=0 && down_i < r)
                    {
                        if(left_j >=0 && left_j < c)
                        {
                            if(A[down_i][left_j] == '.')  count[down_i][left_j]++;
                        }
                        if(A[down_i][j] == '.')   count[down_i][j]++;
                        if(right_j >=0 && right_j < c)
                        {
                            if(A[down_i][right_j] == '.')     count[down_i][right_j]++;
                        }
                    }
                }
            }
        }
        pf("Field #%d:\n",++cnum);
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
                if(A[i][j] == '.')  pf("%d",count[i][j]);
                else    pf("%c",A[i][j]);
            pf("\n");
        }
    }
    return 0;
}
