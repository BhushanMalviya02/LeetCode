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







        // the k is number of time it is to be rotated and it can be greater than n 
        // also k or 2k or 3k is same as arr will be same so 
        // rotatiing k%n when k>n is  same 


        // int newk = k%nums.size();

        //  int idx = nums.size()-newk;
        // vector<int>narr(nums.begin()+idx,nums.end());

        // for(int i =0;i<idx;i++){
        //     narr.push_back(nums[i]);
        // }

        // for(int i =0;i<nums.size();i++){
        //     nums[i] = narr[i];
        // }

        k = k % nums.size();

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());



    }
};