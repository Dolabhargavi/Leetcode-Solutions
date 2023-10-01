class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st;
        string ans,n;
        for(char c:s)
        {
            if(!st.empty() && st.top()==c)
                st.pop();
            else
                st.push(c);
        }
        while(!st.empty())
        {
           ans+=st.top(); 
            st.pop();
        }
        for(int i=ans.length()-1;i>=0;i--)
        {
            n+=ans[i];
        }
        return n;
    }
};