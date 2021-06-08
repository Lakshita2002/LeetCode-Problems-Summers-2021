class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // two pointers
        int i, j;
        vector<int> output;
        
        for(i=0; i<nums.size(); i++){
            for(j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    output.push_back(i);
                    output.push_back(j);
                    break;
                }
            }
            
            // if theres already an ans, no need to go further
            if(output.size()>0) break;
        }
        
        return output;
        
    }
};