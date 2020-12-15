class Solution {
public:
    string findContestMatch(int n) {
        string team[n+1];
        for(int i = 1;i<=n;i++)
            team[i-1]=""+to_string(i);
        for(;n>1;n/=2)
        {
            for(int i = 0; i<n/2;++i)
            {
                team[i]="("+team[i]+","+team[n-i-1]+")";
            }
        }
        return team[0];
        
    }
};
