class Solution {
public:
​
    string removeOuterParentheses(string S) {
       stack< char > stk;
       string ans;
        for(auto i:S){
           if(stk.size()==0){
               stk.push(i);
           }
           else if(i=='('){
               ans+=i;
               stk.push(i);
           }
           else{
               stk.pop();
               if(!stk.empty())
                   ans+=i;
           }
       }
        return ans;
    }
    
    string removeOuterParentheses(string S){
        int opened = 0;
        string ans;
        for(auto c:S){
            if(c=='(' && opened++>0)
                ans+=c;
            else if(c==')' && opened-->1)
                ans+=c;
        }
        return ans;
    }
};
