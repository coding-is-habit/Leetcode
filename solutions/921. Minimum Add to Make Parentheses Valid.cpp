class Solution {
public:
    int minAddToMakeValid(string S) {
     int left = 0, right = 0;
        for(auto i:S){
            if(i==')'){
                if(left == 0)
                    right++;
                else
                    left--;
            }else
                left++;
        }
        return left+right;
    }
};
