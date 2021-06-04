class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // transpose
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i>=j){
                    swap(matrix[i][j], matrix[j][i]);
                }                
            }
        }
        // mirror-row wise
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j<n/2){
                    swap(matrix[i][j], matrix[i][n-j-1]);
                }
            }
        }
    }
};