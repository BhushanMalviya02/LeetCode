class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left ;i<= right ;i++){
        int x= i;
        int check =0;
            while(x > 0){
                int digit = x % 10;

                if(digit == 0){
                    check =1;
                    break;
                }else{
                        if( i % digit  != 0){
                        check =1;
                        break;
                }
                }
 
                x= x/10;
            }
            if(check == 0){
                res.push_back(i);
            }
          }

        return res;
    }
};