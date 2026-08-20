class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // int start =0;
        // float avg =0;
        // int sum =0;
        // float tavg =0;

        // for(int i =0;i<nums.size();i++){
        //     while(i-start >= k){
        //         tavg = sum/k;
        //         sum -= nums[start];
        //         start++;
        //     }
        //     sum += nums[i];
        //     avg = max(avg,tavg);


        // }
        // return avg;


        double start =0;
        double sum =0;
        

        for(int i = start;i<k;i++){
            sum += nums[i];

        }
        double maxavg =sum;

        for(int j = k ;j<nums.size();j++){
            // float tavg =sum/k;
            sum = sum - nums[start] + nums[j];
            maxavg = max(maxavg,sum);
            start++;
            



        }
        
        
        
    
    return maxavg/k;
    }

};