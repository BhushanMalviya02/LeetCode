class Solution {
public:

    void helper(string &digits,int len,int idx,unordered_map<char,string>&f,string &diary,vector<string>&res){

        if(digits.size() == 0){
            return ;
        }

        if(idx == len){
            res.push_back(diary);
            return;
        }

        string ch = f[digits[idx]];

        for(int m =0;m<ch.size();m++){
            diary.push_back(ch[m]);
            helper(digits,len,idx+1,f,diary,res);
            diary.pop_back();
        }

        // return;

    }

    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>f;

        string diary = "";
        vector<string>res;

        f['2']="abc";
        f['3']="def";
        f['4']="ghi";
        f['5']="jkl";
        f['6']="mno";
        f['7']="pqrs";
        f['8']="tuv";
        f['9']="wxyz";


        int len = digits.size();
        int idx = 0;

        helper(digits,len,idx,f,diary,res);

        return res;

    }
};