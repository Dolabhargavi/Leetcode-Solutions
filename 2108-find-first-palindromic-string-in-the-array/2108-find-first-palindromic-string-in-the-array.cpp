class Solution
{
    public:
        string firstPalindrome(vector<string> &words)
        {
            int n = words.size();
            for (int i = 0; i < n; i++)
            {
                string s = words[i];
                int flag = 0;
                for (int i = 0; i < s.size() / 2; i++)
                {
                    if (s[i] != s[s.size() - 1 - i])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    return s;
            }
            return "";
        }
};