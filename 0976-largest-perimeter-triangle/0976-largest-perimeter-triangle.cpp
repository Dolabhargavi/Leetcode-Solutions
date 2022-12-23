class Solution {
public:
    
    int largestPerimeter(vector<int>& nums) {
        int a,b,c,per=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--)
        {
           a=nums[i-2];
           b=nums[i-1];
           c=nums[i];
           if(a+b>c && a+c>b && b+c>a)
           {
              if(per < (a+b+c))
              {
                  per=a+b+c;
              }
           }
        }
        return per;
    }
};