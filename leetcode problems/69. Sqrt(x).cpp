class Solution {
public:
    int mySqrt(int x) {
        
        // base case
        if(x==0 or x==1){
            return x;
        }
        
        // recursive case
        for(long long int i=0; i<=x; i++){
            if(i*i==x){
                return i;
            }
            else if(i*i>x){
                return i-1;
            }
        }
        
        return -1;
        
    }
};