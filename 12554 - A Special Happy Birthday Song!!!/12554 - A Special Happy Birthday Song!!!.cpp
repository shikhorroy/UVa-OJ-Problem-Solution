#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
#define MAX 101
int main()
{
    char name[MAX][MAX],
    song[16][10] = {
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "Rujia",
        "Happy", "birthday", "to", "you"
    };
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
        scanf("%s",name[i]);
    int v = (n / 16) + ((n%16) ? 1 : 0);
    for(int i = 0; i < 16*v; i++){
        printf("%s: %s\n",name[i%n],song[i%16]);
    }
    return 0;
}
