class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int start = 0;
        int end = nums.size() -1;
        int idx = nums.size() -1;

        vector<int>res(nums.size(),0);


        while(start <= end){

            int lsq = nums[start] * nums[start];
            int rsq = nums[end] * nums[end];

            if(lsq < rsq){
                res[idx] = rsq;
                end--;
            }else{
                res[idx] = lsq;
                start++;
            }

            idx--;



        }

        return res;
    }
};