class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       sort(tokens.begin(),tokens.end());
        int ans=0,score=0;
        int i=0;
        int j=tokens.size()-1;
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                power-=tokens[i];           //using two pointers
                score++;
                i++;
            }
            else if(score>0)
            {
                power+=tokens[j];
                score--;
                j--;
            }
            else
            {
                return ans;
            }
            ans=max(ans,score);
            
        }
        cout<<ans;
        return ans;
    }
};