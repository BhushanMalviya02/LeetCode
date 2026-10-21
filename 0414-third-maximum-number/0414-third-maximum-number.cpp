class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LONG_MIN;  //LONG_MIN
        long long second= LONG_MIN;
        long long third = LONG_MIN;
        for(auto x : nums){
            if(x==  first or x == second or x==third){
                continue;
            }

            if(x>first){
                third = second;
                second = first;
                first = x;
            }else if(x > second){
                third = second;
                second = x;
            }else if(x>third){
                third = x;
            }
        }

        if(third == LONG_MIN){
            return first;
        }

        return third;
    }
};