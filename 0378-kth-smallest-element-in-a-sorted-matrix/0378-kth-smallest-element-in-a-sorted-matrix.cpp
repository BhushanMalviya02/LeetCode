class Solution {
public:

    int helper(vector<vector<int>>& matrix, int k,int guess){
        int r = matrix.size()-1;
        int c = 0;
        int temp =0;

        while(r >= 0 && c < matrix.size()){
            if(matrix[r][c] <= guess){
                temp+= r+1;
                c++;
            }else{
                r--;
            }
        }
        return temp;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int start = matrix[0][0];
        int end = matrix[n-1][n-1];
        int res = -1;

        while(start<=end){
            int mid = (start+end)/2;

            int ans = helper(matrix,k,mid);
            if(ans < k){
                start = mid+1;
            }else{
                res = mid;
                end = mid -1;
            }
        }
        return res;
    }
};