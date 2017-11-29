#include<stdio.h>
#include<string.h>
#define maxr 1000
#define maxc 102
char stars[maxr][maxc];
int main()
{
    int r, c, i, j, counts, up_row, down_row, left_col, right_col;
    while(scanf("%d%d",&r,&c)){
        if(r == 0 && c == 0)  break;
        getchar();
        for( i = 0; i < r; i++) gets(stars[i]);
        counts = 0;
        for(i = 0; i < r; i++){
            up_row = i - 1, down_row = i + 1;
            for(j = 0 ; j < c; j++){
                if(stars[i][j] == '*'){
                    left_col = j - 1, right_col = j + 1;
                    if(left_col >= 0 && stars[i][left_col] == '*') continue;
                    if(right_col <= c - 1 && stars[i][right_col] == '*') continue;
                    if(up_row >= 0){
                        if(left_col >= 0 && stars[up_row][left_col] == '*') continue;
                        if(stars[up_row][j] == '*') continue;
                        if(right_col <= c - 1 && stars[up_row][right_col] == '*') continue;
                    }
                    if(down_row <= r - 1){
                        if(left_col >=0 && stars[down_row][left_col] == '*') continue;
                        if(stars[down_row][j] == '*') continue;
                        if(right_col <= c - 1 && stars[down_row][right_col] == '*') continue;
                    }
                    counts++;
                }
            }
        }
        printf("%d\n",counts);
    }
    return 0;
}
