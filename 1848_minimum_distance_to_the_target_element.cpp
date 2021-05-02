class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        // brute force implementation
        
        int n = nums.size();
        int min_val = INT_MAX;
        int temp;
        
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                temp = abs(i-start);
            }
            if(temp<min_val){
                min_val = temp;
            }
        }
        
        return min_val;
        
    }
};