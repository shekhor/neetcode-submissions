class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> >pq;

    KthLargest(int k, vector<int>& nums) {
        for(int i =0; i<nums.size(); i++){
            if(pq.empty()){
                pq.push(nums[i]);
            }else{
                int val = pq.top();
                if(pq.size() < k){
                    pq.push(nums[i]);
                } else{
                    if(val < nums[i]){
                        pq.pop();
                        pq.push(nums[i]);
                    }
                }
                
            }
        }
    }
    
    int add(int val) {

        if(pq.empty()){
            pq.push(val);
        } else{
            int top_val = pq.top();

            if(top_val < val){
                pq.pop();
                pq.push(val);
            }
        }

        return pq.top();

    }
};
