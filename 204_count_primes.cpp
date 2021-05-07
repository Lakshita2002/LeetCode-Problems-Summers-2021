class Solution {
public:
    int countPrimes(int n) {
        // sieve of eratosthenes
        // start with 2(n) check for every multiple of n
        // beginning from n*n and they'll be non-prime
        if(n<=0) return 0;
        
        vector<bool> ans (n, true);
        // because 0 and 1 are not primes
        ans[0] = false;
        ans[1] = false;
        
        for(int i=0; i<=sqrt(n); i++){
            if(ans[i] == true){
                for(int j=i*i; j<n; j=j+i){
                    ans[j] = false;
                }
            }
        }
        
        int a = count(ans.begin(), ans.end(), true);
        return a;
    }
};