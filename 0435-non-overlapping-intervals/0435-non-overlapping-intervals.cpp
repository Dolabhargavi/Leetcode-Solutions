class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int e,j,count=0,flag;
        sort(intervals.begin(),intervals.end(),cmp);
        e=intervals[0][1];
       for(int i=1;i<intervals.size();i++)
        { 
           if(intervals[i][0]<e){
                count++;
            }
            else{
                e=intervals[i][1];
            }
        }
        return count;
    }
};