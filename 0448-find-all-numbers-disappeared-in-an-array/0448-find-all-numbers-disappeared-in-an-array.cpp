class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // unordered_map<int,int>mpp;
        // vector<int> res;

        // for(auto x : nums){
        //     mpp[x]++;
        // }


        // for(int i =1;i<nums.size()+1;i++){
        //     if(!mpp.contains(i)){
        //         res.push_back(i);

        //     }

        // }
        // return res;


        for(int i =0;i<nums.size();i++){
            int idx = abs(nums[i]) -1;
            if(nums[idx] > 0){
                nums[idx] = -nums[idx];
            }}

vector<int>res;
            for(int i =0;i<nums.size();i++){
                if(nums[i] > 0){
                    res.push_back(i+1);
                }
            }
        return res;
    }
};