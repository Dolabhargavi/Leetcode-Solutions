class Solution
{
    public:
        string reverseVowels(string s)
        {
            int n = s.length();
            unordered_map<int, int> m;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                    s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    m[i]++;
                }
            }

            int start = 0;
            int end = n - 1;

            while (start < end)
            {
                if (m.count(start) && m.count(end))
                {
                    swap(s[start], s[end]);
                    start++;
                    end--;
                }
                else if (m.count(start))
                {
                    end--;
                }
                else if (m.count(end))
                {
                    start++;
                }
                else
                {
                    start++;
                    end--;
                }
            }

            return s;
        }
};