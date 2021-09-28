class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        // top down approach
        
        int row = triangle.size();
        int col = row-1;
        
        for(int i=row-2; i>=0; i--){
            for(int j=0; j<col; j++){
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            }
            col--;
        }
        return triangle[0][0];
        
    }
};