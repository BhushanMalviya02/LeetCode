class Solution {
public:

    void helper(vector<int>& candidates , int target , int sum ,int start,vector<vector<int>>&res ,vector<int>&temp){


        if(sum > target){
            return;
        }

        if(sum == target){
            res.push_back(temp);
            return;
        }

        for(int i =start;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            helper(candidates,target,sum+candidates[i],i,res,temp);
            temp.pop_back();
        }
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int sum = 0;
        int len = candidates.size();
        vector<int>temp;
        vector<vector<int>>res;

        helper(candidates,target,0,0,res,temp);


        return res;


    }
};