class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // vector<int> res;
        // for(int i =0;i<nums.size();i++){
        //     int count =0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j] < nums[i] and j != i){
        //             count++;
        //         }

        //     }

        //     res.push_back(count);

        // }

        // return res;


        vector<int>freq(101,0);
        vector<int>res;

        for(auto x : nums){
            freq[x]++;
        }


        for(int i =1;i<freq.size();i++){
            freq[i] +=freq[i-1];
        }

        for(auto c : nums){
            if(c == 0){
                res.push_back(0);
            }else{
            res.push_back(freq[c-1]);

            }


        }

        return res;

    }
};