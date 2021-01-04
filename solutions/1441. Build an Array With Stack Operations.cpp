class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int cnt = 0;
        vector<string> v;
        for( int i = 1; i <= target[target.size()-1] ; i++){
            if(target[cnt]==i){ // if element exist then push
                v.push_back("Push");
                cnt++;
            }
            else{//if not exist then push and pop
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }
};
