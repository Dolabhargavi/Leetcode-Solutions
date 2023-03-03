class Solution {
public:
    int countSubstrings(string s) {
         int n = s.length();
        int length;
        int ans=0;
        if (n < 2)
            return s.size();
        int low, high;
            
        for (int i = 0; i < n; i++) {
            low = i - 1;
            high = i + 1;
            while (low >= 0 && high < n&& s[low] == s[high])
            {
                low--;
                high++;
            }
            length = high - low - 1;
            ans+=(length+1)/2;
            low=i;high=i+1;  ///abccba
            while (low >= 0 && high < n&& s[low] == s[high])
            {
                low--;
                high++;
            }
            length = high - low - 1;
            ans+=(length+1)/2;
        }
        return ans;
    }
};