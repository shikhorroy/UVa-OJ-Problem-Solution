#include<bits/stdc++.h>
using namespace std;

long long mod;

class Matrix
{
public:
    int row, col;
    long long valu[5][5];

    void clear()
    {
        memset(valu,0,sizeof(valu));
        row=0;
        col=0;
    }
    void identify(int x)
    {
        clear();
        row=x;
        col=x;

        for(int i=0; i<row; i++)
            valu[i][i]=1;
    }
    Matrix operator * (Matrix b)
    {
        int i,j,k;
        Matrix c;

        c.clear();
        c.row=row;
        c.col=b.col;

        for(i=0; i<row; i++)
            for(j=0; j<b.col; j++)
                for(k=0; k<col; k++)
                {
                    c.valu[i][j] = c.valu[i][j] + (valu[i][k])*(b.valu[k][j]);
                    c.valu[i][j] %= mod;
                }
        return c;
    }
    Matrix operator ^ (long long p)
    {
        Matrix res, x;
        res.identify(row);

        x=*(this);

        while(p)
        {
            if(p & 1) res = res * x;
            x=x*x;
            p>>=1;
        }
        return res;
    }
};

Matrix a, b;

void setMatrixValues(int val1, int val2)
{
    a.row = b.row = 2;
    a.col = 1; b.col = 2;

    b.valu[0][0] = 1;
    b.valu[0][1] = 1;
    b.valu[1][0] = 1;
    b.valu[1][1] = 0;

    a.valu[0][0] = val2;
    a.valu[1][0] = val1;
}

int main()
{
    int t; scanf("%d", &t);
    int first, second, n, m, pow10[] = {0, 10, 100, 1000, 10000};
    while(t--)
    {
        scanf("%d %d %d %d", &first, &second, &n, &m);

        Matrix x, y;
        setMatrixValues(first, second);

        mod = pow10[m];
        y = b ^ (n - 1);
        x = y * a;

        printf("%lld\n",x.valu[0][0]);
    }

    return 0;
}
