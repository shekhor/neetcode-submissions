class MinStack {
public:

    stack<int> st1;
    stack<int> minStk;

    MinStack() {
        
    }
    
    void push(int val) {
        st1.push(val);
        if(minStk.empty() || minStk.top() >= val){
            minStk.push(val);
        }
    }
    
    void pop() {
        int temp = st1.top();
        st1.pop();
        if(temp == minStk.top()){
            minStk.pop();
        }
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};
