class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // int start =0;
        // vector<int> temp;
        // vector<int> res;

        // for(int i =0;i<k;i++){
        //     temp.push_back(nums[i]);
        // }
    

        // for(int i = k;i<nums.size();i++){
        //         int maxx =INT_MIN;

        //     for(auto it : temp){
        //         maxx = max(maxx,it);
        //         // i++;

        //     }
        //     res.push_back(maxx);
        //     // maxx =0;

        //     temp.erase(temp.begin());

        //     start ++;
        //     temp.push_back(nums[i]);

        // }
           
        // temp.clear();
        // for(int j=nums.size()-k;j<nums.size();j++){
        //     temp.push_back(nums[j]);

        //     // maxx = max(maxx,nums[j]);
        // }
        // // for(int j=nums.size()-k;j<nums.size();j++){
        // //     // temp.push_back(nums[j]);

        // // }
        // // maxx=0;
        //  int maxx =INT_MIN;
        // for(auto it :temp){
        //     maxx = max(maxx,it);


        // }
        // res.push_back(maxx);
        // return res;


        vector<int> res;
        deque<int> dq;

        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.front() <=i-k) {
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                res.push_back(nums[dq.front()]);
            }
        }
        return res;
    }
};