class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // brute force implementation
        // pointers concept
        
        int n = nums.size();
        int count = 0;
        
        for(auto iter=nums.begin(); iter!=nums.end(); iter++){
            if(*iter == 0){
                count ++;
                nums.erase(iter);
                iter--;
            }
        }
        
        for(int i=0; i<count; i++){
            nums.push_back(0);
        }
        
    }
};