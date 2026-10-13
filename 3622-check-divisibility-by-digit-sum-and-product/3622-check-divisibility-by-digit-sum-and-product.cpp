class Solution {
public:
    bool checkDivisibility(int n) {

        int x = n;
        int prods = 1;
        int digs = 0;
        while(x>0){
            int dig = x%10;
            digs+= dig;

            prods*= dig;

            x/=10;
        }

        if(n% (prods+digs) == 0){
            return true;
        }

        return false;
        
    }
};