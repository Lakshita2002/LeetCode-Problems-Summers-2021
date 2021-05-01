class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = 0;
        
        // xor of a number with 0 gives back the number
        // xor of a number with itself gives 0
        for(int i=0; i<nums.size(); i++){
            n = n^nums[i];
        }
        
        return n;
        
    }
};