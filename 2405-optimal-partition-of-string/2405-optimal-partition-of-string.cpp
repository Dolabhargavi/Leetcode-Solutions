class Solution
{
    public:
        int partitionString(string s)
        {
            unordered_map<char, int> m(0);
            int count = 0, n = s.length(),flag=0;
            for (int i = 0; i < n; i++)
            {
                if (m.find(s[i]) != m.end())
                {
                    count++;
                    m.clear();
                    if(i==n-1)
                    {
                        if(count==0) count=2;
                        else count++;
                    }
                    flag=1;
                }
                if(flag==0 && i==n-1) count++;
                flag=0;
                m[s[i]]++;
            }
            return max(1,count);
        }
};