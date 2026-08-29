class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int  reader=0;
        // int writer =0;

        // while(reader < nums.size()){
        //     if(nums[reader] == val){

        //     }
        // }

        // int start =0;
        // int end = nums.size() -1;

        // if(nums.size() == 1 and nums[0] == val){
        //     return 0;
            
        // }

//         while(start<=end){

        

//         while(start<=end and nums[end] == val){
//             end--;
//         }
//         while(start <= end and nums[start] != val){
//             start++;
//         }

//         if(!(start <= end)){
//         swap(nums[start],nums[end]);
//         start++;
//         end--;

//         }




//         }
// end++;
// return end;

int reader =0;
int writer =0;

while(reader < nums.size()){

    if(nums[reader] != val){
        swap(nums[reader],nums[writer]);
        reader++;
        writer++;

    }else{
        reader++;

    }



}
// writer++;
return writer;


    }
};