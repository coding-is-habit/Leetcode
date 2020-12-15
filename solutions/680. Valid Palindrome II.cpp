class Solution {
public:
    bool isPalindrome(string s,int i ,int j)
    {
        while(i<=j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        if(n<=2)
            true;
        if(isPalindrome(s,0,n-1))
            return true;
        int i = 0;
        int j = n-1; 
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                // check palindrome from i to j-1
                bool c1= isPalindrome(s,i,j-1);
                //check palindrome from i+1 to j
                bool c2= isPalindrome(s,i+1,j);
                if(c1||c2)
                    return true;
                else
                    return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
