class NumMatrix {
public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        mat = vector<vector<int>>(m, vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=matrix[i][j];
            }
        }
        return;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int s=0;
        for(int i=row1;i<=row2;i++){
            for(int j=col1;j<=col2;j++){
                s+=mat[i][j];
            }
        }
        return s;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */