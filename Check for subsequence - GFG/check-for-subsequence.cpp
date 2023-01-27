//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int k=0,c=0;
        for(int i=0;i<B.length();i++)
        {
            if(k==A.length() && c!=A.length())
            return false;
            if(B[i]==A[k])
            {
               c++;
               k++;
            }
        }
        if(c!=A.length())
        return false;
        else
        return true;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends