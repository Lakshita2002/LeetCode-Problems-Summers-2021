class Solution {
public:
    bool isPalindrome(long long int x) {
        
        if(x<0) return false;
        
        long long int n = x;
        long long int reverse = 0;
        
        while(n>0){
            reverse += n%10;
            n /= 10;
            reverse *= 10;
        }
        
        reverse /= 10;
        
        if(x == reverse) return true;
        else return false;
        
    }
};