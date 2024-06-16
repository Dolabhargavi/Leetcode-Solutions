class Solution
{
    public:
        int scoreOfString(string s)
        {
            int ans = 0, flg = 0, srt = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (flg == 0)
                {
                    srt = int(s[i]);
                    flg = 1;
                }
                else
                {
                    ans += abs(srt - int(s[i]));
                    srt = int(s[i]);
                }
            }
            return ans;
        }
};