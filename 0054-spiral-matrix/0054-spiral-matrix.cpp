class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0, bottom=matrix.size()-1, left=0, r=matrix[0].size()-1;
        vector<int> x;

        while(top<=bottom && left<=r){
            
            for(int i=left; i<=r;i++){
                x.push_back(matrix[top][i]);
            }
            top+=1;

            for(int i=top; i<=bottom; i++){
                x.push_back(matrix[i][r]);
            }
            r-=1;

            if(top<=bottom){
                for(int i=r; i>=left;i--){
                    x.push_back(matrix[bottom][i]);
                }
                bottom-=1;
            }
            if(left<=r){
                for(int i=bottom; i>=top; i--){
                    x.push_back(matrix[i][left]);
                }
                left+=1;

            }
        }
        return x;
    }
};