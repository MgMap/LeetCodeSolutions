class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) 
            return 0;

        const int INF = INT_MAX/2; //prevent overflow

        vector<int> dp(amount + 1, INF);
        dp[0] = 0; // 0 coins to make amount 0

        // for each target amount from 1 to amount
        for (int target = 1; target <= amount; target++) {
            for (int coin : coins) {
                if (target - coin >= 0) {
                    dp[target] = min(dp[target], dp[target - coin] + 1);
                }
            }
        }

        if(dp[amount] == INF)
            return -1;
        else 
            return dp[amount];
    }
};
