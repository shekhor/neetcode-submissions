class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0, result = 0, left_ind = 0, right_ind=0;
        unordered_map<char, int>mp;

        while(right_ind < s.size()){
            char ch = s[right_ind];
            char left_ch = s[left_ind];

            if(mp[ch] == 0){
                count++; 
                mp[ch]++;
                right_ind ++;
            }else{
                mp[left_ch]--;
                left_ind++;
                count--;
            }
            result = max(result, count);
        }
        return result;
        
    }
};
