class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int res=0;
        for(int i =0;i<nums.size();i++){
            int x = i;
            int count =0;
            while(x>0){
                int dig = x %2;
                if(dig == 1){
                    count++;
                }
                x /=2;

            }
            if(count == k){
                res += nums[i];

            }

        }

        return res;
    }
};