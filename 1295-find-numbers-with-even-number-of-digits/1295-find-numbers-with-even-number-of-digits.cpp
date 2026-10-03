class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res =0;
        for(auto num : nums){

            int x = num;
            int count =0;

            while(num > 0){
                num/= 10;
                count++;
            }

            if(count %2 ==0){
                res ++;
            }

        }
        return res;
    }
};