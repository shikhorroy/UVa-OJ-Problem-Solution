#include<iostream>
#include<cstdio>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int T;
    float Term1, Term2, Final, Attendance, Class_Test1, Class_Test2, Class_Test3;
    sf("%d",&T);
    int cnum = 0;
    for(;cnum++ < T;){
        sf("%f%f%f%f%f%f",&Term1,&Term2,&Final,&Attendance,&Class_Test1,&Class_Test2);
        float max1 = max(Class_Test1, Class_Test2),
        max2 = min(Class_Test1, Class_Test2);
        sf("%f",&Class_Test3);
        if(Class_Test3 > max1){
            max2 = max1;
            max1 = Class_Test3;
        }else if(Class_Test3 > max2){
            max2 = Class_Test3;
        }
        float average = (max1 + max2) / 2.0;
        float total = Term1 + Term2 + Final + Attendance + average;
        if(total < 60)  pf("Case %d: F\n",cnum);
        else if(total >= 60 && total < 70)  pf("Case %d: D\n",cnum);
        else if(total >= 70 && total < 80)  pf("Case %d: C\n",cnum);
        else if(total >= 80 && total < 90)  pf("Case %d: B\n",cnum);
        else if(total >= 90)  pf("Case %d: A\n",cnum);
    }
    return 0;
}

