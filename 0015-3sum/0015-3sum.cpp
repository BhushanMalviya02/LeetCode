class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int target =0;

        sort(nums.begin(),nums.end());

        for(int i = 0;i<nums.size();i++){
            if(i > 0 and nums[i] == nums[i-1]){
                continue;
            }
           
            

            int j = i+1;

            int k = nums.size()-1;

            while(j<k){


            int sum = nums[i] + nums[j] + nums[k];  

            if( sum  > target){
                k--;
            }else if (sum < target){
                j++;
            }else{
                res.push_back({nums[i],nums[j],nums[k]});

            while( j < k  and nums[j] == nums[j+1]){
                j++;
            }
            while( j < k  and nums[k] == nums[k-1]){
                k--;
            }

            j++;
            k--;
            }

            }
        }

        return res;
    }
};