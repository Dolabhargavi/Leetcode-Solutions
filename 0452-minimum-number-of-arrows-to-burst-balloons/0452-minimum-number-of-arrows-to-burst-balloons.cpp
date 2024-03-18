class Solution
{
    public:
        int findMinArrowShots(vector<vector < int>> &points)
        {
            int count = 1;
            sort(points.begin(), points.end());
            int cmp = points[0][1];
            for (size_t i = 1; i < points.size(); ++i)
            {
                if (points[i][0] > cmp)
                {
                    cmp = points[i][1];
                    count++;
                }
                else
                {
                    cmp = min(cmp, points[i][1]);
                }
            }

            return count;
        }
};