class Solution {
public:
    int findMin(vector<int>& nums) {

        // int start = 0;
        // int end = nums.size()-1;
        // int res =0;

        // while(start <= end){
        //     int mid = (start+end)/2;

        //     if(nums[mid] < nums[(mid+1)%nums.size()]){

        //         start = mid+1;
        //         res =(mid+1)%nums.size() ;
        //     }else{
        //         end = mid-1;
        //     }
        // }

        // int f = nums[(res + 1)% nums.size()];
        // return f;


        int start =0;
        int end = nums.size()-1;
        int n = nums.size();
        int res = -1;

        while(start <= end){
            int mid = (start+end)/2;

            if(nums[mid] > nums[n-1]){
                start = mid+1;
            }else{
                res = nums[mid];
                end = mid-1;
            }
        }
        return res;
    }
};