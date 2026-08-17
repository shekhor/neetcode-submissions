class Solution {
public:
    struct compare{
            bool operator()(const pair<int, int> &a, const pair<int, int> &b){
                return a.second < b.second;
            }
        };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        vector<int> results;

        sort(nums.begin(), nums.end());

        int count = 0;

        for(int i =0; i < nums.size(); i++){
            count = 1;
            while(i < nums.size()-1 && nums[i] == nums[i+1]){
                count++;
                i++;
            }

            pq.push(make_pair(nums[i], count));
        }

        
        
        while(k){
            pair<int, int> p1 = pq.top();
            results.push_back(p1.first);
            pq.pop();
            k--;
        }
        
        return results;
    }
};
