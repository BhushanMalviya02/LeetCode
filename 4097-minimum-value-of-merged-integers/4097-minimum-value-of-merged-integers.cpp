class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = start+1;

        priority_queue<int,vector<int>,greater<int>>pq;

        while(start < n and end < n){
            int p1 = nums[start];
            int p2 = nums[end];

            int l = 0;

            int temp = p2;

            while(temp > 0){
                // int dig = p2 % 10;
                l++;
                temp/=10;    
            }

            int newi = (p1 * (int)pow(10,l)) + p2;

            pq.push(newi);

            start += 2;
            end+= 2;
            
        }

        return pq.top();
        
    }
};