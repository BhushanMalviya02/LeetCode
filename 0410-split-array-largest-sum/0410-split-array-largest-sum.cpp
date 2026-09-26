class Solution {
public:


    bool helper(vector<int>& nums, int k, long long guess){

        long long split = 1;
        long long sum = 0;

        for(int i =0;i<nums.size();i++){

            if(sum + nums[i] <= guess){
                sum += nums[i];
            }else{
                split++;
                sum = nums[i];
            }

        } 

        if(split > k){
            return false;
        }

        return true;
    }


    int splitArray(vector<int>& nums, int k) {
        long long start = *max_element(nums.begin(),nums.end());
        long long end = accumulate(nums.begin(),nums.end(),0LL);
        int res = 0;

        if(nums.size() < k){
            return -1;
        }

        while(start <= end){
            long long mid = (start + end) /2;

            if(helper(nums,k,mid)){
                res = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        return res;
    }
};