class Solution {
    public int maxProfit(int[] prices) {
        int low = Integer.MAX_VALUE;
        int pro = 0;
        int high = 0;
        
        for(int i = 0; i < prices.length; i++){
            if(prices[i] < low){
                low = prices[i];
            }
            high = prices[i] - low;
            if(pro< high){
                pro = high;
            }
        }
        return pro;
    }
}