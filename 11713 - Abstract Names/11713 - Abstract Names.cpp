#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int tc;
    scanf("%d\n",&tc);
    while(tc--){
        string str1, str2;
        getline(cin,str1);
        getline(cin,str2);
        bool flag (true);
        int l1 = str1.length(), l2 = str2.length();
        if(l1 == l2){
            for(int i = 0 ; i != l2; i++){
                if(str1[i] != str2[i]){
                    if((str1[i] != 'a' && str1[i] != 'e' && str1[i] != 'i' && str1[i] != 'o' &&
                        str1[i] != 'u' && str1[i] != 'A' && str1[i] != 'E' && str1[i] != 'I' &&
                        str1[i] != 'O' && str1[i] != 'U' )||(str2[i] != 'a' && str2[i] != 'e'&&
                        str2[i] != 'i' && str2[i] != 'o' && str2[i] != 'u' && str2[i] != 'A' &&
                        str2[i] != 'E' && str2[i] != 'I' && str2[i] != 'O' && str2[i] != 'U')){
                        //printf("%c %c\n",str1[i],str2[i]);
                        printf("No\n");
                        flag = false;
                        break;
                    }
                }
            }
        }
        else{
            printf("No\n");
            flag = false;
        }
        if(flag) printf("Yes\n");
    }
    return 0;
}
