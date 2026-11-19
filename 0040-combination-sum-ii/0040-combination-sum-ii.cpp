class Solution {
public:

    void helper(vector<int>& candidates,int target,int sum,int start ,vector<vector<int>>&res,vector<int>&temp){

        if(sum > target){
            return;
        }
        if(sum == target){
            res.push_back(temp);
            return;
        }

        for(int i =start;i<candidates.size();i++){

            if(i > start and candidates[i] == candidates[i-1]){
                continue;
            }

            temp.push_back(candidates[i]);
            helper(candidates,target,sum+candidates[i],i+1,res,temp);
            temp.pop_back();
            // return;
        }



    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int len = candidates.size();

        vector<int>temp;
        vector<vector<int>>res;

        sort(candidates.begin(),candidates.end());

        helper(candidates,target,0,0,res,temp);

        return res;
    }
};