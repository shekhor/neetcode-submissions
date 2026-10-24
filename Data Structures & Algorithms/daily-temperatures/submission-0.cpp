class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>results(temperatures.size());
        int min_value = INT_MAX;

        int left = 0, temp_ind, temp_val, c;

        for(int i = 0; i< temperatures.size(); i++){
            while(results[left] != 0 && left < temperatures.size()){
                left++;
            }

            temp_ind = i - 1;
            temp_val = temperatures[i];
            c = 1;
            while(temp_ind >= left && min_value <= temp_val && temperatures[temp_ind] < temp_val){
                if(results[temp_ind] == 0){
                    results[temp_ind] = c;
                }
                c++;
                temp_ind --;
            }
            min_value = min(min_value, temperatures[i]);
        }
        return results;
    }
};
