class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        // return ;

        int start =1;
        int end = *max_element(piles.begin(),piles.end());
        // int sum = accumulate(piles.begin(),piles.end(),0);
        int res = -1;

        while(start <= end){
            int mid = start+(end-start)/2;

            // int no = sum / mid;
            long long no =0;

            for(auto pile : piles){

                no += (pile + mid -1)/ mid;

            }

            if(no > h){
                start = mid+1;

            }else{
                res = mid;
                end = mid-1;
            }
        }
        return res;
        
    }
};