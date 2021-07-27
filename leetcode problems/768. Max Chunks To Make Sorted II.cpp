class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int lmax[100000];
        int rmin[100000];
        
        int ans = 0;
        
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            ans = max(ans, arr[i]);
            lmax[i] = ans;
        }
        
        rmin[n] = INT_MAX;
        ans = INT_MAX;
        
        for(int i=n-1; i>=0; i--){
            ans = min(ans, arr[i]);
            rmin[i] = ans;
        }
        
        int res = 0;
        
        for(int i=0; i<n; i++){
            if(lmax[i] <= rmin[i+1]){
                res++;
            }
        }
        
        return res;
        
    }
};