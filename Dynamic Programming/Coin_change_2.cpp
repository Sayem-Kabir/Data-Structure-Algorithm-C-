#include<bits/stdc++.h>
using namespace std;
const int N = 2500;
int dp[300][10010];

int CoinChange(int n, int amount, vector<int>& coins)
{
    if(amount == 0) return 1;
    if(n<0) return 0;
    if(dp[n][amount] != -1) return dp [n][amount];

    int ways = 0;
    for(int coin_amount=0; coin_amount <= amount; coin_amount += coins[n]) 
    {
        ways += CoinChange(n-1, amount - coin_amount, coins);
    }
    return dp[n][amount] = ways;
}


int main()
{
    memset(dp, -1, sizeof(dp));
    vector<int> coins = {1,2,5};
    cout<<"Total Ways = "<<CoinChange(coins.size() - 1, 5, coins);
}