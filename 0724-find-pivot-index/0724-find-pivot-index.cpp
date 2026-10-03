class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum =0;
        for(auto num : nums){
            totalsum += num;
        }

        int cursum =0;

        for(int i =0;i<nums.size();i++){
            int ls = cursum;
            cursum += nums[i];
            int rs = totalsum - cursum;

            

            if(ls == rs ){
                return i;
            }



        }
        return -1;
    }
};