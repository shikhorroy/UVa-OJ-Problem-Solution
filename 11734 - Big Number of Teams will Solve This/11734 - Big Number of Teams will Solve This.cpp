#include<iostream>
#include<string>
#include<cstdio>
#include<cctype>
using namespace std;
#define MAX 100
int main()
{
    int t;
    string str1, str2;
    scanf("%d\n",&t);
    //getchar();
    for(int i = 1; i <= t; i++){
        getline(cin,str1);
        getline(cin,str2);
        if(str1 == str2)    printf("Case %d: Yes\n",i);
        else{
            int l1 = str1.length(), l2 = str2.length();
            /*if(l1 <= l2)    printf("Case %d: Wrong Answer\n",i);
            else    printf("Case %d: Output Format Error\n",i);*/
            string s1, s2;
            for(int j = 0; j != l1; j++){
                if(isalpha(str1[j]))    s1 += str1[j];
            }
            for(int j = 0; j != l2; j++){
                if(isalpha(str2[j]))    s2 += str2[j];
            }
            if(s1 == s2)    printf("Case %d: Output Format Error\n",i);
            else    printf("Case %d: Wrong Answer\n",i);
        }
    }
    return 0;
}
