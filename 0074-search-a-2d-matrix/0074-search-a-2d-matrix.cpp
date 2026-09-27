class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start =0;
        int end = matrix.size()-1;
        int nn = matrix[0].size()-1;

        while(start<= end){
            
            int mid = (start+end)/2;



            if(target < matrix[mid][0]){
                end = mid-1;
            }else if(target > matrix[mid][nn]){
                start = mid +1;
            }else{
                // if(target)

                int st =0;
                int ed = nn;

                while(st<=ed){
                 int mm = (st+ed)/2;
                if(target == matrix[mid][mm]){
                    return true;
                }else if(target > matrix[mid][mm]){
                    st = mm+1;
                }else{
                    ed = mm-1;
                }
                }
              
return false;
            }
        }

        return false;
    }
};