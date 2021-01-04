class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char ch:s){
            if(ch == '(' || ch == '{' || ch=='[')
                stk.push(ch);
            else if(!stk.empty()){
                if(stk.top() == '(' && ch == ')')
                    stk.pop();
                else if(stk.top() == '{' && ch == '}')
                    stk.pop();
                else if(stk.top() == '[' && ch == ']')
                    stk.pop();
                else return false;
            }
            else return false;
        }
        return stk.empty();
    }
};
