class Solution
{
    public:
        bool validPalindrome(string s)
        {
            int low = 0;
            int high = s.length() - 1;
            while (low < high)
            {
                if (s[low] != s[high])
                {
                    bool isleft = true;
                    int newlow = low + 1;
                    int newhigh = high;
                    while (newlow < newhigh)
                    {
                        if (s[newlow] != s[newhigh])
                        {
                            isleft = false;
                            break;
                        }
                        newlow++;
                        newhigh--;
                    }
                    bool isright = true;
                    newlow = low;
                    newhigh = high - 1;
                    while (newlow < newhigh)
                    {
                        if (s[newlow] != s[newhigh])
                        {
                            isright = false;
                            break;
                        }
                        newlow++;
                        newhigh--;
                    }
                    return isleft || isright;
                }
                low++;
                high--;
            }
            return true;
        }
};