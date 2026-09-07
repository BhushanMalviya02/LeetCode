class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size() -1;
        int first = -1;
        int second = -1;


        while(start <= end){
            int guess = (start + end)/2;

            if(nums[guess] == target){
                first = guess;
                end = guess -1;
            }else if(nums[guess] > target){
                end = guess -1;
            }else{
                start = guess +1;
            }
        }

        start =0;
        end = nums.size()-1;


        while(start <= end){
            int guess = (start + end)/2;

            if(nums[guess] == target){
                second = guess;
                start = guess +1;
            }else if(nums[guess] > target){
                end = guess -1;
            }else{
                start = guess +1;
            }
        }


        return {first,second};



    }
};