class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // int s =0;
        // int j=1;

        // int ptr =1;

        // for(int i =0;i<nums.size()-1;i++){
        //     while(nums[j] == nums[s]){
        //         // ptr++;
        //         i++;
        //         j++;
        //     }

            
        //     swap(nums[j],nums[ptr]);
        //     ptr++;
        //     s++;
        //     // j++;

        //     // start++;
        // }
        // return s;


        // 

        // for(int i =0;i<nums.size()-1;i++){
        //     while(nums[reader] == nums[writer]){
        //         reader++;
        //         i++;
        //     }
        //     swap(nums[reader],nums[i]);
        //     writer++;

        // }

        // return writer;
        


        // int reader =1;
        // int writer =0;

        // while(reader < nums.size()){
        //     if(nums[reader] == nums[reader -1]){
        //         reader++;
        //     }else{
        //         writer++;
        //         nums[writer] = nums[reader];
        //         reader++;
        //     }
        // }
        // writer++;
        // return writer;











        int writer =0;
        int reader = 1;

        while(reader < nums.size()){
            if(nums[reader] == nums[writer]){
                reader++;
            }else{
                writer++;
                swap(nums[reader],nums[writer]);
                reader++;
                // writer++;
            }
        }

        writer++;
        return writer;













    }
};