class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        int sum = 0;
        for(auto i:ops){
            int j = v.size()-1;
            if(i=="+"){
                v.push_back(v[j]+v[j-1]);
                sum+=v[j]+v[j-1];
            }
            else if(i=="D"){
                
                v.push_back(2*v[j]);
                sum+=2*v[j];
            }
            else if(i=="C"){
                sum-=v[j];
                v.pop_back();
            }
            else{
                v.push_back(stoi(i));
                sum+=v[j+1];
            }
        }
        return sum;
    }
};
