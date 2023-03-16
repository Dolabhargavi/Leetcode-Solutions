class Solution
{
    public:
        int uniqueMorseRepresentations(vector<string> &words)
        {
            unordered_map<char, string> m;
            unordered_map<string, int> m1;
            int i = 0, count = 0;
            string arr[] = { ".-",
                "-...",
                "-.-.",
                "-..",
                ".",
                "..-.",
                "--.",
                "....",
                "..",
                ".---",
                "-.-",
                ".-..",
                "--",
                "-.",
                "---",
                ".--.",
                "--.-",
                ".-.",
                "...",
                "-",
                "..-",
                "...-",
                ".--",
                "-..-",
                "-.--",
                "--.." };
            string s = "";
            for (char c = 'a'; c <= 'z'; c++)
            {
                m[c] = arr[i];
                i++;
            }
            for (int i = 0; i < words.size(); i++)
            {
                s = "";
                for (int j = 0; j < words[i].size(); j++)
                {
                    s += m[words[i][j]];
                }
                m1[s]++;
            }
            for (auto i = m1.begin(); i != m1.end(); i++)
                count++;

            return count;
        }
};