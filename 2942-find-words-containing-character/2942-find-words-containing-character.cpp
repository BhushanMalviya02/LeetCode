class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        int i =0;

        for(auto word : words){

            if(word.find(x) != string::npos){
                res.push_back(i);


            }
            i++;
        }

        return res;
        
    }
};