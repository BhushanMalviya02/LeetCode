class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int ans =0;

        for(int x : nums){
            mpp[x]++;
        }
        for(int i =0;i< mpp.size();i++){
            if(mpp[nums[i]] > 1){
                ans = nums[i];
            }
        }
        return ans;
        
    }
};