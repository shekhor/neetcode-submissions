class Solution {
public:

    int searchIndex(vector<int>& nums, int lo, int hi, int tar){
        int mid;

        while(lo <= hi){
            mid = lo + (hi-lo)/2;

            if(nums[mid] == tar){
                return mid;
            }else if(nums[mid] < tar){
                lo = mid + 1;
            } else{
                hi = mid -1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo, hi, tar;

        for(int i = 0; i < numbers.size(); i++){

            tar = target - numbers[i];
            hi = searchIndex(numbers, i+1, numbers.size() -1, tar);
            if(hi != -1){
                return {i+1, hi+1};
            }
        }
    }
};
