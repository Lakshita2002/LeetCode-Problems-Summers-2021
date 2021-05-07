class Solution {
public:
    int jump(vector<int>& nums) {
        
        vector<int> ans(nums.size(), INT_MAX);
        ans[0] = 0;
        
        // check for each position
        for(int i=0; i<nums.size(); i++){
            // runs till nums[i] as nums[i] is the 
            // max no of steps it can take
            for(int j=0; j<=nums[i]; j++){
                // i+j should be less than nums.size() 
                // so as to check for array bound
                if(i+j<nums.size()){
                    ans[i+j] = min(ans[i+j], 1+ans[i]);
                }
            }
        }
        
        // return the last value
        return ans[nums.size()-1];
        
    }
};