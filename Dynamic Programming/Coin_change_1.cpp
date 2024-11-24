#include<bits/stdc++.h>
using namespace std;
const int N = 2500;
int dp[10010];

int CoinChange(int amount, vector<int>& coins)
{
    if(amount == 0) return 0;
    if(dp[amount] != -1) return dp[amount];

    int ans = INT_MAX;
    for(int coin : coins)
    {
        if(amount - coin >=0)
        ans = min(ans+0ll , CoinChange(amount - coin, coins) + 1ll);
    }
    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    vector<int> coins = {1,3,5};
    cout<<CoinChange(11,coins);
}



