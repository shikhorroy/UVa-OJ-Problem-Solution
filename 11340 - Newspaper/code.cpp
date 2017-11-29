#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

typedef long long int64;

int main()
{
    char line[10001];
    int kases;
    scanf("%d", &kases);
    for (int c = 0; c < kases; ++c)
    {
        int characters;
        scanf("%d\n", &characters);
        int64 val[300]={0};
        //memset(val, 0, sizeof(val));
        for (int i = 0; i < characters; ++i)
        {
            char ch;
            scanf("%c ",&ch);
            int num;
            scanf("%d\n",&num);
            val[ch + 128] = num;
        }
        int lines;
        scanf("%d\n", &lines);
        double total = 0;
        for (int i = 0; i < lines; ++i)
        {
            gets(line);
            int l = strlen(line);
            for (int j = 0; j < l; ++j)
                total += val[line[j] + 128];
        }
        printf("%.2lf$\n", total / 100);
    }
    return 0;
}
