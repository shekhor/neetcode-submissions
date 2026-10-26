class Solution {
public:
    vector<string> results;
    void makeParenthesis(int n, string str, stack<char>stk, int length){
        if(n==0 && str.size() == length){
            results.push_back(str);
            return;
        } 
        if(str.size() > length){
            return;
        }

        stk.push('(');
        makeParenthesis(n, str+'(', stk, length);
        stk.pop();

        if(!stk.empty() && stk.top() == '('){
            stk.pop();
            makeParenthesis(n-1, str+')', stk, length);

        }else{
            makeParenthesis(n, str+')', stk, length);
        }

    }
    vector<string> generateParenthesis(int n) {
        
        stack<char>stk;
        makeParenthesis(n, "", stk, n * 2);

        return results;

    }
};
