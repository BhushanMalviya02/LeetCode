class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int start=0;
        // int end =nums.size()-1;

        int reader =0;
        int writer =0;

        while(reader<nums.size()){
            // while(nums[start] != 0){
            //     start++;
            // }
            // while(nums[end] == 0){
            //     end--;
            // }
            // swap(nums[start],nums[end]);
            // start++;
            // end--;

            if(nums[reader] ==0){
                reader++;
            }else{
                swap(nums[reader],nums[writer]);
                writer++;
                reader++;
            }
        }
    }
};