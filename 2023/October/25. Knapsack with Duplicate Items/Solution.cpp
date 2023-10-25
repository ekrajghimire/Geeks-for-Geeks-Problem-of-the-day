// Knapsack with Duplicate Items
// October 25, 2023
// C++ Code

class Solution {
public:
    int knapSack(int N, int W, int val[], int wt[]) {
        int dp[W + 1] = {0};
        
        for (int i = 1; i <= N; i++) 
        {
            for (int j = 1; j <=W; j++) 
            {
                if (j - wt[i-1] >= 0) 
                {
                    dp[j] = max(dp[j], dp[j - wt[i-1]] + val[i-1]);
                }
            }
        }
        return dp[W];
    }
};
