class Solution {
public:
    string capitalizeTitle(string title) {
        int count=0,x=-1;
         
        for(int i=0;i<title.length();i++)
        {
            if(x==-1)
                x=i;
            count++;
             title[i]=tolower(title[i]);
            if(title[i]==' ')
            {
                if(count>3)
                {
                   title[x]=toupper(title[x]);
                }
                count=0;
                x=-1;
            }
            
        }
        if(count>2)
        {
           title[x]=toupper(title[x]);
        }
        return title;  
    }
};