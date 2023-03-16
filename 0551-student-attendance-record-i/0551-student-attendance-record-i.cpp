class Solution
{
    public:
        bool checkRecord(string s)
        {
            if(s.length()<2) return true;
            int ab = 0;
            if (s[0] == 'A') ab++;
            if (s[s.length() - 1] == 'A') ab++;
            for (int i = 1; i < s.length() - 1; i++)
            {
                if (s[i] == 'A') ab++;
                if (s[i] == 'L' && s[i - 1] == 'L' && s[i + 1] == 'L')
                    return false;
            }
            if (ab >= 2) return false;
            else return true;
        }
};