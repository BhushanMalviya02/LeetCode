class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // long long count =0;

        // for(int i =0;i<nums.size();i++){
        //     long long tempcount =0;
        //     while(nums[i] == 1){
        //         tempcount++;
        //         // i++;
        //     }
        //     count = max(count,tempcount);
        // }
        // return count;


        // vector<int> freq;

        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]

        // }


        // long long start =0;
        // long long end=0;
        // long long len =0;

        // for(int i=0;i<nums.size();i++){
        //     while(nums[i] == 0){
        //         i++;
        //     }
        //     start = i;
        //     end =i;
        //     while(nums[i] == 1){
        //         end++;
        //     }
        //     len = max(len,end-start);


        // }
        // return len;
        // int count =0;
        // int maxcount =0;
        // for(int i =0;i<nums.size();i++){
        //     if(nums[i] == 1){
        //         count ++;
        //     }else{
        //         count =0;
        //     }

        //     maxcount = max(count,maxcount);
        // }

        // return maxcount;











        long long count =0;
        long long res =0;
        int i =0;

        // for(int i =0;i<nums.size();i++){
        //     while(nums[i]==0){
        //         i++;
        //     }
        //     while(nums[i]==1 and i<nums.size()){
        //         count++;
        //         i++;
        //     }
        //                 res = max(res,count);

        //     count=0;


        // }
        while(i<nums.size()){
            while(i<nums.size() and nums[i] == 0){
                i++;
            }
            while(i<nums.size() and nums[i] == 1 ){
                count++;

                i++;
            }
            res = max(res,count);
            count =0;
        }



return res;










    }
};