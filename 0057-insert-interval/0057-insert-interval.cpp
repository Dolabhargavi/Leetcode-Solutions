class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        vector<int>temp;
        int first=newInterval[0];
        int last=newInterval[1];
        int flg=0;
        for(int i=0;i<intervals.size();i++)
        {
            if(flg==2)
            ans.emplace_back(intervals[i]);
            else if(flg==1) 
            {
                if(intervals[i][0]>last)
                {
                    temp.emplace_back(last);
                    ans.emplace_back(temp);
                    ans.emplace_back(intervals[i]);
                    flg=2;
                }
                else if(intervals[i][0]<=last && last<=intervals[i][1])
                {
                    temp.emplace_back(intervals[i][1]);
                    ans.emplace_back(temp);
                    flg=2;
                }
                else if(last>intervals[i][1] && i==intervals.size()-1)
                {
                    temp.emplace_back(last);
                    ans.emplace_back(temp);
                }
                    
            }
            else if(intervals[i][0]<=first && intervals[i][1]>=first)
            {
                if(intervals[i][1]>=last)
                {
                    return intervals;
                }
                else
                {
                    flg=1;
                    temp.emplace_back(intervals[i][0]);
                    if(i==intervals.size()-1)
                    {
                        temp.emplace_back(last);
                        ans.emplace_back(temp);
                    }
                }
                
            }
            else if(intervals[i][0]>first)
            {
                flg=1;
                temp.emplace_back(first);
                if(last==intervals[i][1])
                {
                    temp.emplace_back(last);
                    ans.emplace_back(temp);
                    flg=2;
                }
                else if(last<intervals[i][0]) 
                {
                    temp.emplace_back(last);
                    ans.emplace_back(temp);
                    ans.emplace_back(intervals[i]);
                    flg=2;
                }
                else if(last<intervals[i][1])
                {
                    temp.emplace_back(intervals[i][1]);
                    ans.emplace_back(temp);
                    flg=2;
                }
                else if(i==intervals.size()-1 && last>intervals[i][1])
                {
                    temp.emplace_back(last);
                    ans.emplace_back(temp);
                }
                else if(i==intervals.size()-1 && last<intervals[i][1])
                {
                    temp.emplace_back(intervals[i][1]);
                    ans.emplace_back(temp);
                }
            }
            else
            {
                ans.emplace_back(intervals[i]);
            }
            
        }
        if(flg==0)
            ans.push_back(newInterval);
        return ans;
    }
};