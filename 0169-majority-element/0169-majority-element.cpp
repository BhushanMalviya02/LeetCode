class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int temp =0;
        int res =0;

        

        for(int i =0;i<nums.size();i++){
            if(temp == 0){
                temp++;
                res = nums[i];
            }else{
                if(nums[i] == res){
                    temp++;
                }else{
                    temp--;
                }
                

            }

        }
        return res;
    }
};