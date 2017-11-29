#include<bits/stdc++.h>
int main()
{
    int i,j;
    int m,n;
    int _case, length, wavelength;
    scanf("%d", &_case);
    for(i = 1;i <= _case; i++)
    {
        scanf("%d%d",&length, &wavelength);
        for(j = 1;j <= wavelength; j++)
        {
            for(m = 1;m <= length; m++)
            {
                for(n = 1;n <= m;n++)
                    printf("%d",m);
                printf("\n");
            }
            for(m = length -1 ; m >= 1; m--)
            {
                for(n = 1;n <= m; n++)
                    printf("%d",m);
                printf("\n");
            }
             if(wavelength - j)
                printf("\n");
        }
         if(i != _case)
             printf("\n");
    }
    return 0;
}
