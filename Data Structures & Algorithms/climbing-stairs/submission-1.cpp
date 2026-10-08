#include <cstring>
class Solution {
public:

    int dp[50];
    int countSteps(int sum, int n){
        if(dp[sum] != -1) return dp[sum];
        if(sum > n){
            return 0;
        } else if(n == sum){
            return 1;
        }

        dp[sum] = countSteps(sum + 1, n) + countSteps(sum + 2, n);
        return dp[sum];
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return countSteps(0, n);
    }
};
