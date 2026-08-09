class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st = nums[0];
        vector<int> res;

        for(int i =0;i<nums.size();i++){

            while(st < nums[i]){
                // return {st};
                res.push_back(st);
                  st++;

            }
             
st++;

        }

        return res;
    }
};