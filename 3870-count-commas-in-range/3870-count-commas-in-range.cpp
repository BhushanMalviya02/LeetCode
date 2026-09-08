class Solution {
public:
    int countCommas(int n) {
        // int i =1000;
        // int res = 0;
        // while(i<=n){

        //     long long len = 0;

        //     while(i != 0){
        //         i /= 10;
        //         len++;
        //     }

            
        //     res = len / 3;

        // }

        // return res;

        int totalCommas = 0;
        
        for (long long i = 1000; i <= n; i *= 1000) {
            totalCommas += (n - i + 1);
        }
        
        return totalCommas;
    }
};


//1,000,000

