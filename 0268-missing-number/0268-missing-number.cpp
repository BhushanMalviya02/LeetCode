class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum =0;
        int rsum =0;
        for(int i =0;i<=nums.size();i++){
            rsum += i;
        }
        for(auto x : nums){
            sum+= x;

        }

return rsum - sum;
        
    }
};