class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;

        for(int i =0;i< s.size();i++){
            int re = 26 - (s[i] - 'a');

            int img = re * (i+1);

            sum+= img;

        }

        return sum;
    }
};


// a  = 97

// 97- 71 == 26