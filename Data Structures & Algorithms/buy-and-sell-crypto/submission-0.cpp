class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;

        int min_val = INT_MAX;

        for(int i = 0; i< prices.size(); i++){
            min_val = min(min_val, prices[i]);

            result = max(result, prices[i] - min_val);
        }

        return result;
          
    }
};
