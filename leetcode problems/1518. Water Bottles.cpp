class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int bottles_consumed = 0;
        int bottles_exchanged = 0;
        int bottles_leftover = 0;
        
        while(numBottles > 0){
            bottles_consumed = bottles_consumed+numBottles;
            bottles_exchanged = (numBottles+bottles_leftover)/numExchange;
            bottles_leftover = (numBottles+bottles_leftover)%numExchange;
            numBottles = bottles_exchanged;
        }
        
        return bottles_consumed;
    }
};