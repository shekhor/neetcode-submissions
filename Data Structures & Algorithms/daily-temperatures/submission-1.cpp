class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>results(temperatures.size());
        int min_value = INT_MAX;

        int left = 0, temp_ind, temp_val, c;

        stack<int>stk;

        for(int i = 0; i < temperatures.size(); i++){
            c = 1;
            temp_val = temperatures[i];
            while(!stk.empty()){
                temp_ind = stk.top();
                c = i - temp_ind;
                if(temperatures[temp_ind] < temp_val){
                    stk.pop();
                    results[temp_ind] = c;
                }else{
                    break;
                }
            }
            stk.push(i);
        }
        return results;
    }
};
