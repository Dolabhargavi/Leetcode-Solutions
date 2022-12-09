class Solution {
public:
    int minSetSize(vector<int>&nums) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        unordered_map<int,int>:: iterator p;
         priority_queue<int>queue;
        for(p=map.begin();p!=map.end();p++)
        {
            queue.push(p->second);
        }
        int n=nums.size();
        int size=n/2;
        int res=0;
        while(n>size)
        {
            int t=queue.top();
            n-=t;
            res++;
            queue.pop();
        }
        
        return res;
    }
};