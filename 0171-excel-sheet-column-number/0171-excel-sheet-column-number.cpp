class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long int ans=0;
        int j=columnTitle.length()-1;
        for(int i=0;i<columnTitle.length();i++)
        {
            ans+=pow(26,j)*(char(columnTitle[i])-64);
            j--;
        }
        return ans;
    }
};