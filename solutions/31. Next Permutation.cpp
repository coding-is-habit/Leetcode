class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.length();
        if(i<=1)
            return ;
        i = i - 2;
        // decreasing element index
        while(i>=0 && nums[i+1]<=nums[i])
            i--;
        if(i>=0)
        {
            // finding larger number then number at i 
            int j = nums.size()-1;
            while(j>=0 && nums[j]<=nums[i])
                j--;
            // swap both
        swap(nums[i],nums[j]);
        }
        //reverse array
        reverse(nums.begin()+i+1,nums.end());
            
    }
};
