class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int res = 0;

        for(int i=0;i<matrix.size();i++){
            for(int j=0 ;j<matrix[0].size();j++){
                if(i==j){
                    res+=matrix[i][j];
                }


                if(i == n-1-j){
                    res+= matrix[i][j];
                }
            }
        }
        if(matrix.size() % 2 == 1){
            res-= matrix[n/2][n/2];
        }
        return res;
    }
};