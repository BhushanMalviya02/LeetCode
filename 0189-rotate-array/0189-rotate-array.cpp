class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // int idx = nums.size()-k;
        // vector<int>narr(nums.begin()+idx,nums.end());

        // for(int i =0;i<idx;i++){
        //     narr.push_back(nums[i]);
        // }

        // for(int i =0;i<nums.size();i++){
        //     nums[i] = narr[i];
        // }
        int newk = k%nums.size();

         int idx = nums.size()-newk;
        vector<int>narr(nums.begin()+idx,nums.end());

        for(int i =0;i<idx;i++){
            narr.push_back(nums[i]);
        }

        for(int i =0;i<nums.size();i++){
            nums[i] = narr[i];
        }

    }
};