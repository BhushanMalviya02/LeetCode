class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i =0;
        int m =0;
        int j = nums.size()-1;
        while( m <= j){
            if(nums[m] == 0){
                swap(nums[i],nums[m]);
                i++;
                m++;
                //
            }
            else if(nums[m] == 1){
                m++;
            }
            else if(nums[m] == 2){
                swap(nums[j],nums[m]);
                j--;
            }
            // m++;
            
        }


        // int i =0;
        // int j = nums.size()-1;

        // while(i <= j){

        //     while(nums[i] == 0){
        //         i++;

        //     }
        //     while(nums[j] == 2){
        //         j--;
        //     }

        //     if(nums[i] ==1 and nums[i-1] == 0){
        //         i++;
        //     }
        //     if(nums[j]==1 and nums[j-1] ==2){
        //         j--;
        //     }
        //     swap(nums[i],nums[j]);

        //     i++;
        //     j--;

        // }
        
    }
};