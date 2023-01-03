class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int l=0,count=0;
        for(int i=0;i<strs[0].size();i++)
        {
            l=0;
            for(int j=0;j<strs.size();j++)
            {
                if(char(strs[j][i])<l)
                {
                    count++;
                    break;
                }
                l=char(strs[j][i]);
                    
            }
        }
        return count;
    }
};