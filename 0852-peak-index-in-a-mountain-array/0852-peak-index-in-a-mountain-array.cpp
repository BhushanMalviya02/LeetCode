class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start =0;
        int end = arr.size()-1;
        int res =0;


        // 1,2,3,4,10,3,2

        while(start<=end){
            int mid = (start+end)/2;

            if(arr[mid] < arr[mid+1]){
                start=mid+1;
            }else{
                res = mid;
                end = mid-1;
            }
        }
        return res;
        
    }
};