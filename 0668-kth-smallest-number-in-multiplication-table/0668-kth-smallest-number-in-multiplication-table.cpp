class Solution {
public:

    int helper(int m, int n, int k,int guess){
        int r =m;
        int c = 1;
        int temp =0;

        while(r > 0 and c <= n){
            if(r*c <= guess){
                temp += r;
                c++;
            }else{
                r--;
            }
        }

        return temp;
    }

    int findKthNumber(int m, int n, int k) {
        int start = 1;
        int end = m*n;
        int res = -1;

        while(start <= end){
            int mid = (start + end)/2;

            int ans = helper(m,n,k,mid);
            

            if(ans < k){
                start = mid+1;
            }else{
                res = mid;
                end = mid-1;
            }
        }
        return res;
    }
};