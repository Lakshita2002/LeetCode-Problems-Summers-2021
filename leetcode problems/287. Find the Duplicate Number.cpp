class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // optimised approach
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            if(nums[abs(nums[i])-1] > 0){
                nums[abs(nums[i])-1] *= -1;
            }
            else if(nums[abs(nums[i])-1] < 0){
                ans = abs(nums[i]);
            }
        }
        
        return ans;
    }
};