class Solution {
public:
    bool check(vector<int>& nums) {
        // int idx =0;
        // for(int i =0;i<nums.size()-1;i++){
        //     // if(nums[i+1]<nums[i]){
        //     //     idx = i;
        //     // }
        //     // break;

            

        //     while(i<nums.size()-1 and nums[i+1] >= nums[i] ){
        //         i++;
        //         continue;

        //     }
        //     idx = i;
        //     break;
        // }
        // idx++;

        // vector<int>nnums(nums.begin()+idx,nums.end());
        // nnums.insert(nnums.end(),nums.begin(),nums.begin()+idx);

        // for(int j=0; j<nnums.size()-1;j++){
        //     if(nnums[j+1]<nnums[j]){
        //         return false;
        //     }

        // }

        

        // return true;




        int count =0;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                count++;
            }
            

        }
        if(nums[nums.size()-1] > nums[0]){
            count++;

        }

        if(count > 1){
            return false;
        }
        return true;


    }
};