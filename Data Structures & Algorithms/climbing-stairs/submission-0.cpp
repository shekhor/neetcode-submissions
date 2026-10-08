class Solution {
public:

    int countSteps(int sum, int n){
        if(sum > n){
            return 0;
        } else if(n == sum){
            return 1;
        }

        int count = countSteps(sum + 1, n) + countSteps(sum + 2, n);
        return count;
    }
    int climbStairs(int n) {
        return countSteps(0, n);
    }
};
