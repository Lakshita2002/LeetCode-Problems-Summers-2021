class Solution {
public:
    int numberOfMatches(int n) {
        
        int matches = 0;
        
        while(n>0){
            
            if(n==1){
                break;
            }
            
            if(n==2){
                matches += 1;
                break;
            }
            
            if(n%2==0){
                matches += (n/2);
                n = n/2;
            }
            else{
                matches += (n-1)/2;
                n = ((n-1)/2)+1;
            }
            
            
        }
        
        return matches;
        
    }
};