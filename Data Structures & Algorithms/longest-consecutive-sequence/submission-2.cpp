class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;

        int count = 0, result = 0;

        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            mp[temp]++;
        }

        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            if(!mp.count(temp-1)){
                count = 0;
                while(mp.count(temp)){
                    count++;
                    temp++;
                }
                result = max(result, count);
            }
        }
        return result;

    }
};
