#include<iostream>
using namespace std;

int LCS(string a, string b, int m, int n)
{
    int c[100][100];
    string d[100][100];
    for(int i=1; i<=m; i++)
    {
        c[i][0]={0};
    }
    for(int j=0; j<n; j++)
    {
        c[0][j]={0};
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i]==b[j])
            {
                c[i][j]= c[i-1][j-1]+1;
                d[i][j]= "copy";
            }
            else if(c[i-1][j] >= c[i][j-1])
            {
                c[i][j]= c[i-1][j];
                d[i][j]= "skipx";
            }
            else
            {
                c[i][j]= c[i][j-1];
                d[i][j]= "skipy";
            }
        }
    }
    return c[m][n];
}

int main ()
{
    string a = "tttpp";
    string b = "tttmm";
    int m= sizeof(a)/sizeof(int);
    int n= sizeof(b)/sizeof(int);

    cout<<"Length of LCS is ="<<LCS(a,b,m,n);
}
