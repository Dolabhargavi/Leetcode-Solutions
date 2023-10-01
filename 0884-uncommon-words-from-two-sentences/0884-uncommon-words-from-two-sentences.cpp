class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        map<string,int>m;
        istringstream myst(s1+" "+s2);
        while(myst >> s1) m[s1]++;
        for(auto l:m)
        {
            if(l.second==1)
            {
                ans.push_back(l.first);
            }
        }
        return ans;
    }
};