class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        // brute force implementation
        
        vector<int> diff;
        int c = 0;
        
        // store index of 1
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                c++;
                diff.push_back(i);
            }
        }
        
        // no 1s present
        // so false
        if(c == 0) return true;
        
        // check difference of index against k
        for(int i=0; i<diff.size()-1; i++){
            if(diff[i+1]-diff[i]-1 < k) return false;
        }
        
        return true;
        
    }
};