class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> expected(heights.begin(),heights.end());
        sort(expected.begin(),expected.end());
        int res = 0;


        for(int i =0;i< heights.size();i++){

            if(heights[i] == expected[i]){
                continue;
            }

            res++;




        }
        return res;
    }
};