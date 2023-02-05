class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max_l=0;
        int count=1,min_len;
        for(int i=0;i<rectangles.size();i++)
        {
           min_len=min(rectangles[i][0],rectangles[i][1]);
            if(min_len>max_l)
            {
                 max_l=min_len;
                count=1;
            }
            else if(min_len==max_l)
                count++;
        }
        return count;
        
    }
};