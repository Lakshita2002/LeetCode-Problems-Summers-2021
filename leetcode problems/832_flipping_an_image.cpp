class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        // flip horizontally
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j<n/2){
                    swap(image[i][j], image[i][n-j-1]);
                }
            }
        }
        // invert the image
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(image[i][j] == 0) image[i][j] = 1;
                else image[i][j] = 0;
            }
        }
        
        return image;
    }
};