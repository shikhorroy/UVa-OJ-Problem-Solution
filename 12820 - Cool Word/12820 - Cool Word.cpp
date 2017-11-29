#include<stdio.h>
#include<string.h>
int main()
{
    char str[35];
    int n, tot[31], flag[31], cs = 0, I, i, j, x, ans;

    while(scanf("%d", &n) == 1){
        ans = 0;
        for(I = 1; I <= n; I++){

            scanf("%s", str);
            if(strlen(str) < 2) continue;

            for(i = 0; i <= 30; i++) flag[i] = tot[i] = 0;

            for(j = 0; str[j]; j++){
                x = ++tot[str[j]-'a'];
            }
            int yes = 1;
            for(i = 'a'; i <= 'z'; i++){
                if(flag[tot[i - 'a']]){
                    yes = 2; break;
                }
                flag[tot[i - 'a']] = tot[i - 'a'];
            }
            if(yes == 1) ans++;
        }
        printf("Case %d: %d\n", ++cs, ans);
    }
    return 0;
}
