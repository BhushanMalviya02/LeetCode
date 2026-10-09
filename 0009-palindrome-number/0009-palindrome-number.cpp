class Solution {
public:
    bool isPalindrome(int x) {
        long long start = 0;

        long long n = x;
        long long newn=0;
        long long i =1;
        
        while(n>0){
            long long dig = n% 10;

            newn =  (newn*10) +dig;



            n /= 10;
        }

        return (newn == x);


    }
};