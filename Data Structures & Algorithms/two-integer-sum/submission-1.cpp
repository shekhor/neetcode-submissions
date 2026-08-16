class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp, flag;
        vector<int> results;
        unordered_map<int, int> mp;

        for(int i=0; i < nums.size(); i++){
            temp = target - nums[i];

            if(mp.count(temp)){
                results.push_back(mp[temp]);
                results.push_back(i);
                return results;
            }

            mp[nums[i]] = i;
        }
    }
};
