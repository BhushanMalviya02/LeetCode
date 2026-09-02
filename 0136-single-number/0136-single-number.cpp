class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int sum =0;

        // for(int i =0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum > 0){
        //         sum-=nums[i];

        //     }

        int ans  = 0;



        for(auto x : nums){
            ans  ^= x;
        }


        return ans;
    }
};