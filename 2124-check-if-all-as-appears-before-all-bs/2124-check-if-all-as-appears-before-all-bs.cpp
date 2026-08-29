class Solution {
public:
    bool checkString(string s) {
        int i =0;

        bool seenb = false;
        for(auto x : s){
            // while(x == 'a'){
            //     x++;
            // }

            

            // if(x == 'a'){
            //     return false;
            // }

            if(x == 'b'){
                seenb = true;
            }

            if(seenb == true and x == 'a'){
                return false;
            }


        }


        return true;
    }
};