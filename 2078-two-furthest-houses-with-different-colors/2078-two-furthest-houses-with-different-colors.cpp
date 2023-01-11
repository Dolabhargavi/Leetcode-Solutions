class Solution {
public:
    int maxDistance(vector<int>& colors) {
       int dis=0;
        for(int i=0;i<colors.size()-1;i++)
        {
            for(int j=i+1;j<colors.size();j++)
            {
                if(colors[i]!=colors[j])
                {
                    if((j-i)>dis)
                    dis=j-i; 
                }
            }
        }
        return dis;
    }
    
};