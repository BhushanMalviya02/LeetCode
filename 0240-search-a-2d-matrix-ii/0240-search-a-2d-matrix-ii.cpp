class Solution {
public:


// bool searchr(vector<vector<int>>& matrix , int target ,int midr){
//             int n = matrix[0].size();
//             int start =0;
//             int end = n-1;
            

//             while(start<=end){
//                 int mid = (start+end)/2;

//                 if(target == matrix[midr][mid]){
//                     return true;
//                 }else if(target > matrix[midr][mid]){
//                     start = mid +1;
//                 }else{
//                     end = mid -1;
//                 }
//             }
//             return false;
//         }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        
        for(int i =0;i<matrix.size();i++){
            for(int j =0;j<matrix[i].size();j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }

        return false;

        

        // int startr =0;;
        // int endr = matrix.size() -1;
        // int n = matrix[0].size();

        // while(startr<=endr){
        //     int midr = (startr + endr)/2;

        //     if(target>= matrix[midr][0]  and target <= matrix[midr][n-1] ){
        //         // search in row
        //         return searchr(matrix,target,midr);

        //     }
        //     else if(target > matrix[midr][n-1]){
        //         startr = midr + 1;
        //     }else{
        //         endr = midr - 1;
        //     }
            
        // }
        // return false;
    }
};