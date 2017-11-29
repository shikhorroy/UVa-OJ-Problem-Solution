#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    long int t, income, i, total;
    long double tax;
    while(scanf("%ld", &t) == 1)
    {
        for(i = 1; i <= t; i++)
        {
            scanf("%ld",&income);
            tax = 0;
            if(income > 180000)
            {
                income -= 180000;
                if(income >= 300000)
                {
                    tax = (300000 * 10.0) / 100.0;
                    income -= 300000;
                    if(income >= 400000)
                    {
                        tax += (400000 * 15.0) / 100.0;
                        income -= 400000;
                        if(income >= 300000)
                        {
                            tax += (300000 * 20.0) / 100.0;
                            income -= 300000;
                            tax += (income * 25.0) / 100.0;
                        }
                        else
                        {
                            tax += (income * 20.0) / 100.0;
                        }
                    }
                    else
                    {
                        tax += (income * 15.0) / 100.0;
                    }
                }
                else
                {
                    tax=(income * 10.0) / 100.0;
                    if(tax<2000)
                        tax=2000;
                }
            }
            total = (long int)tax;
            if(abs(total - tax) > 0.0)
                total++;
            printf("Case %ld: %ld\n",i,total);
        }
    }
}
