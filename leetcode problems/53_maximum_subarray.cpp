class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // kadane's algorithm
        // O(n) complexity
        
        int n = nums.size();
        int max_sum = INT_MIN;
        int curr_sum = 0;
        
        for(int i=0; i<n; i++){
            curr_sum += nums[i];
            if(curr_sum>=max_sum){
                max_sum = curr_sum;
            }
            
            // adding negative number will not give maximum
            if(curr_sum<0){
                curr_sum = 0;
            }
        }
        
        return max_sum;
        
    }
};