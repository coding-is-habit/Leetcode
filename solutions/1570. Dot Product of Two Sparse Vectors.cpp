static const auto speedup = []() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();
class SparseVector {
    vector<int> values,indices;
public:
    SparseVector(vector<int> &nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                values.push_back(nums[i]);
                indices.push_back(i);
            }
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int result = 0;
        int idx1=0;
        int idx2=0;
        while(idx1<indices.size() && idx2<vec.indices.size())
        {
            if(indices[idx1]==vec.indices[idx2])
            {
                result+=(values[idx1++]*vec.values[idx2++]);
            }
            else if((indices[idx1]<vec.indices[idx2]))
                idx1++;
            else
                idx2++;
        }
        return result;
    }
};
​
// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);
