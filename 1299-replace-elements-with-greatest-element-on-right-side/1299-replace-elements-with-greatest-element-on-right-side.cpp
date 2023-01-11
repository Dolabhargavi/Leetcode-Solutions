class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rep=arr[arr.size()-1],temp;
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i]> rep)
            {
                temp=arr[i];
                arr[i]=rep;
                rep=temp;
            }
            else 
            {
               arr[i]=rep;
            }
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};