class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y,c=0;
        while(z)
        {
            if(z&1==1)
                c++;
            z=z>>1;
        }
        return c;
    }
};