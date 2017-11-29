#include<bits/stdc++.h>
using namespace std;
int main()
{
    int length;
    string TAKA;
    int row = 0;

    while(getline(cin,TAKA))
    {
        bool flag = true;
        length = TAKA.length();
        for(int i = 0; i < length; i++){
            if(TAKA[i] != '0'){
                flag = false;
                break;
            }
        }
        if(flag)
        {
            printf("%4d. 0\n",(++row));
            continue;
        }

        int kuti = 0;
        if(length > 8 && (TAKA[length - 9] == '0' && TAKA[length - 8] == '0'))
        {
            kuti = 1;
        }

        printf("%4d.",(++row));

        int check = 1;
        int space = 1;
        for(int i = length; i > 0; i--)
        {
            int indx = (length - i);
            if(kuti == 1 && indx == (length - 8))
            {
                printf(" kuti");
                continue;
            }
            if((TAKA[indx] == '0' && TAKA[indx-1] != '0' && check == 0)
                    || (TAKA[indx] != '0'))
            {
                if(space == 1){
                    printf(" ");
                    space = 0;
                }
                printf("%c",TAKA[indx]);
                switch(i)
                {
                case 1:
                case 2:
                case 5:
                case 7:
                case 9:
                case 12:
                case 14:
                    check = 0;
                    break;
                case 3:
                case 10:
                    printf(" shata");
                    space= check = 1;
                    break;
                case 4:
                case 11:
                    printf(" hajar");
                    space= check = 1;
                    break;
                case 6:
                case 13:
                    printf(" lakh");
                    space= check = 1;
                    break;
                case 8:
                case 15:
                    printf(" kuti");
                    space= check = 1;
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
