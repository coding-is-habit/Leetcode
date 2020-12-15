class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.length()-1;
        int n2 = num2.length()-1;
        int carry = 0;
        string ans;
        while((n1>=0) || (n2>=0) || (carry==1))
        {
            int temp1=n1>=0?num1[n1]-'0':0;
            int temp2=n2>=0?num2[n2]-'0':0;
            int sum = temp1+temp2+carry;
            carry=sum/10;
            ans=to_string(sum%10)+ans;
            n1--;
            n2--;
        }
        return ans;
    }
};
