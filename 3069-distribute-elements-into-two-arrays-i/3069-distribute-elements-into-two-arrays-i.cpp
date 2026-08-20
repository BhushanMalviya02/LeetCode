class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int >res;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i =2;i<nums.size();i++){
            if(arr1.back() > arr2.back()){
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
        // int size = arr1.size()+arr2.size();

        for(int j =0;j<arr1.size();j++){
            res.push_back(arr1[j]);

        }
        for(int k =0;k<arr2.size();k++){
            res.push_back(arr2[k]);

        }


        return res;


        
    }
};