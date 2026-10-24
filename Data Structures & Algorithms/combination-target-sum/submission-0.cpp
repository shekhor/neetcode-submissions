class Solution {
public:
    vector<vector<int>>results;
    void checkSum(vector<int>& nums, int target, int sum, int ind, vector<int> &tempNums){
        if(target == sum){
            results.push_back(tempNums);
            return;
        }

        if(ind >= nums.size() || sum > target){
            return;
        }
        

        tempNums.push_back(nums[ind]);
        
        checkSum(nums, target, sum + nums[ind], ind, tempNums);
        tempNums.pop_back();

        checkSum(nums, target, sum, ind + 1, tempNums);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> tempNums;
        checkSum(nums, target, 0, 0, tempNums);

        return results;
    }
};
