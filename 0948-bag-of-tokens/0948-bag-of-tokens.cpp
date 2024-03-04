class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       sort(tokens.begin(),tokens.end());
        int ans=0,score=0;
        int n=tokens.size()-1;
        while(!tokens.empty())
        {
            if(tokens[0]<=power)
            {
                power-=tokens[0];
                score++;
                tokens.erase(tokens.begin());
                n--;
            }
            else if(score>0)
            {
                power+=tokens[n];
                score--;
                tokens.pop_back();
                n--;
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