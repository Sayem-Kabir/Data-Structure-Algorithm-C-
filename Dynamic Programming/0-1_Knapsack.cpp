#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

int wt[105], val[105];
long long dp[105][100005];

long long Knapsack(int x, int wt_left)
{
    if(wt_left==0) return 0;
    if(x<0) return 0;
    if(dp[x][wt_left] != -1) return dp[x][wt_left];

    long long ans = Knapsack(x-1, wt_left);

    if(wt_left - wt[x] >=0)
    ans = max (ans, Knapsack(x-1, wt_left - wt[x]) + val[x]);
    return dp[x][wt_left] = ans;
}

int main ()
{
    memset(dp, -1, sizeof(dp));
    int n,w;
    cout<<"Total Items = ";
    cin>>n;
    cout<<"Heighest weight can take = ";
    cin>>w;
    cout<<"Weights of items are = ";
    for(int i=0; i<n; i++)
    {
        cin>> wt[i];
    }
    cout<<"Values of items are = ";
    for(int i=0; i<n; i++)
    {
        cin>>val[i];
    }
    cout<<"Heighest value can be carried = "<<Knapsack(n-1, w);
}