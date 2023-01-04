class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       unordered_map<int,int>m;
        int count=0,k=0,flag=0;
        for(int i=0;i<tasks.size();i++)
        {
            m[tasks[i]]++;
        }
        for(auto it:m)
        {
            flag=0;
            k=it.second;
            if(k>=3)
            {
                count+=k/3;
                k=k%3;
                flag=1;
            }
            if(k==1 && flag==1)
            {
                count--;
                k+=3;
            }
                
            if(k>=2)
            {
               count+=k/2;
                k=k%2; 
            }
            if(k!=0)
                return -1;
        }
        return count;
    }
};