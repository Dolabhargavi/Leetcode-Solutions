class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=0,j,flag=0;
        sort(points.begin(),points.end());
        int s,e;
        for(int i=0;i<points.size();i++)
        {
            s=points[i][0];
            e=points[i][1];
            flag=0;
           for(j=i+1;j<points.size();j++)
           {
               if((s<=points[j][0] && points[j][0]<=e) ||( s<=points[j][1] && points[j][1]<=e) )
               {
                   if(s<points[j][0])
                     s=points[j][0]; 
                   if( e>points[j][1])
                      e=points[j][1];
                   flag++;
               }
               else
               break;
                    
           }
            if(i==points.size()-1 && flag!=0)
                count++;
            if(flag!=0) 
                i=j-1;
            count++;
        }
        return count;
    }
};