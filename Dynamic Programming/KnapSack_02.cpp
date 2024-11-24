#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

int wt[105], val[105];
long long dp[105][100005];

long long Knapsack(int x, int value_left)
{
    if(value_left== 0) return 0;
    if(x<0) return 1e15;
    if(dp[x][value_left] != -1) return dp[x][value_left];

    long long ans = Knapsack(x-1, value_left);

    if(value_left - val[x] >= 0)
    ans = min(ans, Knapsack(x-1, value_left - val[x]) + wt[x]);
    return dp[x][value_left] = ans;
}

int main()
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

    int max_value = 1e5;
    for(int i = max_value; i>=0; i--)
    {
        if(Knapsack(n-1, i) <= w)
        {
            cout<<i<<endl;
            break;
        }
    }
}