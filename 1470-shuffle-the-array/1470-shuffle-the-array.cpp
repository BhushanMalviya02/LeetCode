class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // vector<int> a1(nums.begin(),nums.begin()+n);
        // vector<int> a2(nums.begin()+n,nums.end());
        vector<int>ans;
        // int i =0;
        // int j=n;

        // for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]);
        //     ans.push_back(nums[j]);
        //     i++;
        //     j++;


        // }

        // return ans;
        int start =0;
        int mid = n;
        for(int i =0;i<n;i++){
            ans.push_back(nums[start]);
            ans.push_back(nums[mid]);
            start++;
            mid++;

        }

        return ans;
        
    }
};