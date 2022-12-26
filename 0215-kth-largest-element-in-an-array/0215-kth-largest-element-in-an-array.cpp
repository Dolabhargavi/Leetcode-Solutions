class Solution {
public:
    int partition(vector<int>& nums,int s,int e)
    {
        int piv=nums[e],j=s-1;
        for(int i=s;i<=e-1;i++)
        {
            if(piv>nums[i])
            {
                j++;
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
               
            }
        }
        int temp=nums[e];
        nums[e]=nums[j+1];
        nums[j+1]=temp;
        return j+1;
    
    }
    
    int quicksort(vector<int>&nums,int s,int e,int k)
    {
        int p=partition(nums,s,e);
        if(p==(nums.size()-k))
            return nums[p];
        else if(p>nums.size()-k)
            return quicksort(nums,s,p-1,k);
        else
            return quicksort(nums,p+1,e,k);
        return -1;
    }
    int findKthLargest(vector<int>& nums, int k) {
        return quicksort(nums,0,nums.size()-1,k);
        
    }
};