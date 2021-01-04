class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(auto i:ops){
            if(i=="+"){
                int first = s.top();
                s.pop();
                int second = s.top();
                s.push(first);
                s.push(first+second);
            }
            else if(i=="D"){
                s.push(2*s.top());
            }
            else if(i=="C"){
                s.pop();
            }
            else{
                int res = 0;
                int cnt = 0;
                bool neg = false;
                if(i[0]=='-'){
                    cnt++;
                    neg=true;
                }
                    
                for(; cnt < i.length(); cnt++){
                    res=res*10+i[cnt]-'0';
                }
                res= neg?-res:res;
                s.push(res);
            }
        }
        int ans=0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};
