class Solution {
public:
    void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    int sort(vector<int>& nums,int s,int e)
    {
        int pivot=nums[e],i=s-1;
        for(int j=s;j<e;j++)
        {
           if(nums[j]<pivot)
           {
             i++;
             swap(nums[i],nums[j]);
           }
        }
        swap(nums[i+1],nums[e]);
        return i+1;
    }
   int randompartition(vector<int>&arr,int start,int end){
    //select random element of array :
    srand(time(NULL));
    int pI = start + rand() % (end - start);
    swap(arr[pI],arr[end]);
    return sort(arr,start,end);
    }
    void quicksort(vector<int>& nums,int s,int e)
    {
        if(s<e)
        {
            int p=randompartition(nums,s,e);
            quicksort(nums,s,p-1);
            quicksort(nums,p+1,e);  
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int flag=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[0])
                flag=1;
        }
        if(flag==0)
            return nums;
        quicksort(nums,0,nums.size()-1);  
        return nums;
    }
};