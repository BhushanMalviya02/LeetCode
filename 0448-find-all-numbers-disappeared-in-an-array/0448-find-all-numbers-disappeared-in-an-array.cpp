class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int> res;

        for(auto x : nums){
            mpp[x]++;
        }


        for(int i =1;i<nums.size()+1;i++){
            if(!mpp.contains(i)){
                res.push_back(i);

            }

        }
        return res;
    }
};