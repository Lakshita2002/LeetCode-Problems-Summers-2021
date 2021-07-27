class Solution {
public:
    int subtractProductAndSum(int n) {
        int d1, d2;
        d1 = d2 = n;
        
        int p = 1;
        int s = 0;
        
        // product
        while(d1>0){
            int rem = d1%10;
            p = p*rem;
            d1 = d1/10;
        }
        
        // sum
        while(d2>0){
            int rem = d2%10;
            s = s+rem;
            d2 = d2/10;
        }
        
        return p-s;
    }
};