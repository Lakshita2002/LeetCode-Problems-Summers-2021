class Solution {
public:
    int sumSquares(int n){
        int ans = 0;
        while(n>0){
            int rem = n%10;
            ans += rem*rem;
            n /= 10;
        }
        return ans;
    }
    
    bool isHappy(int n) {
        // base case
        if(n==1 or n==7) return true;
        else if(n<10) return false;
        // recursive case
        return isHappy(sumSquares(n));
    }
};