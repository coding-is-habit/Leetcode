class Solution {
public:
    void rev(vector<char>& s,int i, int j)
    {
        if(i>=j)
            return ;
        swap(s[i++],s[j--]);
        rev(s,i,j);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        if(n<=1)
            return;
        rev(s,0,n-1);
        return;
    }
};
