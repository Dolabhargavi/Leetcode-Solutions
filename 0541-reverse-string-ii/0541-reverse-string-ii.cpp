class Solution
{
    public:
        string reverseStr(string s, int k)
        {
            int n = s.length();
            if (n < k)
            {
                for (int i = 0; i < n / 2; i++)
                {
                    int temp = s[i];
                    s[i] = s[n - i - 1];
                    s[n - i - 1] = temp;
                }
                return s;
            }
            int j = 0;
            while (j < n && n - j >= k)
            {
                for (int i = 0; i < k / 2; i++)
                {
                    int temp = s[j + i];
                    s[j + i] = s[j + k - i - 1];
                    s[j + k - i - 1] = temp;
                }
                j = j + 2 * k;
                if (n - j - 1 < k)
                {
                    for (int i = 0; i < ((n - j) / 2); i++)
                    {
                        int temp = s[j + i];
                        s[j + i] = s[n - i - 1];
                        s[n - i - 1] = temp;
                    }
                    return s;
                }
            }
            return s;
        }
};