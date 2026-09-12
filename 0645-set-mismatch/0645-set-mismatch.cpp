class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int size = nums.size();
        // int i =0;
        // int num = 1;
        // while(i < size){
        //     if(num == nums[i]){
        //         i++;
        //         num++;
        //     }else{
        //         return {nums[i],num};
        //     }
        // }
        // return {0,0};

//         int miss =0;
//         int id=0;


//         unordered_map<int,int>mpp;

//         for(auto x : nums){
//             mpp[x]++;
//         }


//     int temp = 1;
//             for(int i=0;i<nums.size();i++){
//                 if(mpp.contains(temp)){
//                     if(mpp[temp] == 2){
//                     id = temp;

//                 }
//                 }else{
//                     miss = temp;

//                 }

//                     temp++;
                

//             }

// return {id,miss};





int miss = 0;
int rep = 0;
int temp = 1;
int size = nums.size();
unordered_map<int,int>mpp;

for(auto x : nums){
    if(mpp.contains(x)){
        rep = x;
    }
    mpp[x]++;
}

for(int i =0;i<size;i++){
    if(!mpp.contains(temp)){
        miss = temp;
        break;
    }
    temp++;
}

return {rep,miss};


    }
};