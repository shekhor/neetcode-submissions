class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp, flag;
        vector<int> results;
        for(int i = 0; i< nums.size(); i++){
            temp = target - nums[i];
            
            flag = 0;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] == temp){
                    results.push_back(i);
                    results.push_back(j);
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                return results;
                break;
            }
        }
    }
};
