// two pointer method
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l, r, maxProfit;
        l = maxProfit = 0;
        r = 1;
        
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profit = prices[r]-prices[l];
                maxProfit = max(maxProfit, profit);
            }
            else{
                l = r;
            }
            r++;
        }
        
        return maxProfit;
    }
};