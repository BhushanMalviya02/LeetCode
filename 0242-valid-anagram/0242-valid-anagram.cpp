class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<string,int> mpp;


        if(s.size() != t.size() ){
            return false;
        }

        vector<int>mpp(26,0);






        for(int i =0;i<s.size();i++){
            mpp[s[i] - 'a']++;
            mpp[t[i] - 'a']--;
        }

        // for(int j =0;j<t.size();j++){
            // mpp.contains(t[j]){
            //     mpp[t[j] - 'a']--;
            // }


        // }

        // if(mpp.size() > 0){
        //     return false;
        // }

        for(int i =0;i<26;i++){
            if(mpp[i] != 0 ){
                return false;
            }
        }

        return true;


    }
};