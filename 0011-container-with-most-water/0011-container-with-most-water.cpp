class Solution {
public:
    int maxArea(vector<int>& height) {
       int i = 0, j = height.size()-1, maxa = INT_MIN;
        while (i<j) {
            int area = min(height[i], height[j])*(j-i);
            if(area>maxa)
                maxa=area;;
            if (height[i] > height[j]) 
                j--;
            else 
                i++;
        }
        return maxa;
    }
};