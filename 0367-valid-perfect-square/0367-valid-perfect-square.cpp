class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 0;
        int end = (num/2)+1;

        while(start<= end){
            long long mid = (start+end)/2;

            if(mid*mid > num){
                end--;
            }else if(mid*mid < num){
                start++;
            }else{
                return true;
            }
        }

        return false;
    }
};