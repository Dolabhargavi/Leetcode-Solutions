class Solution
{
    public:
        bool isPalindrome(string s)
        {
            string ns = "";
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    ns += s[i];
                }
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    ns += s[i] + 32;
                }
                if (s[i] >= '0' && s[i] <= '9')
                {
                    ns += s[i];
                }
                
            }
            int n = ns.length();
            for (int i = 0; i < n / 2; i++)
            {
                if (ns[i] != ns[n - 1 - i]) return false;
            }
            return true;
        }
};