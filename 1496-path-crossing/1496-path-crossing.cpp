class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        string s;
        unordered_map<string,int>map;
        map["00"]=1;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='E')
                x++;
            else if(path[i]=='W')
                x--;
            else if(path[i]=='N')
                y++;
            else
                y--;
            if(x<10 && y<10 || (x>=10 && y>=10) )
            {
                s=to_string(x)+to_string(y);
            }
           else
           {
            if(x<10)
              s="0"+to_string(x)+to_string(y);
            if(y<10)
              s=to_string(x)+"0"+to_string(y);
           }
            // cout<<s<<" ";
            if(map[s]==1)
                    return true;
            else
               map[s]++;    
        }
        
      return false;
    }
};