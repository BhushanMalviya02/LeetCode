class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int mid =( start + end)/2;

        int a = nums[mid];
        int count = 0;


        for(auto x : nums){
            

            if( x == a){
                count++;
            }

            if(count > 1){
                return false;
            }

        }
        return true;
    }
};