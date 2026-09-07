class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size() - 1 ;

        while(start <= end){
            int guess = ( start + end ) / 2 ;
            if(nums[guess] == target) return guess;
            else if(nums[guess] < target ) start = guess + 1;
            else end = guess - 1 ;
        }
        return -1;
    }
};