#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    string str1, str2;
    while(cin>>str1>>str2){
        int len1 = str1.length(),
            len2 = str2.length();
        if(len1 > len2){
            printf("No\n");
            continue;
        }
        int flag = 1, temp = 0, j;
        for(int i = 0; i < len1; i++){
            int ck = 0;
            for(j = temp;j < len2; j++){
                if(str1[i] == str2[j]){
                    ck = 1;
                    temp = j+1;
                    break;
                }
            }
            if(ck == 0){
                flag = 0;
                printf("No\n");
                break;
            }
        }
        if(flag == 1)
            printf("Yes\n");
    }

    return 0;
}
