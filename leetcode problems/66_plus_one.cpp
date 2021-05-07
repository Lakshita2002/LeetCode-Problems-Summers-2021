class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // ans is just a copy of digits
        vector<int> ans(digits);
        
        int n = digits.size() - 1;
        int carry = 1;
        
        for(int i=n; i>=0; i--){
            if(digits[i]+carry > 9){
                ans[i] = (digits[i]+carry)%10;
                carry = (digits[i]+carry)/10;
            }
            else{
                ans[i] = digits[i]+carry;
                carry = 0;
                break;
            }
        }
        
        // carry was never used
        // corner case
        
        if(carry == 1){
            ans.insert(ans.begin(), 1);            
        }
        
        return ans;
        
    }
};