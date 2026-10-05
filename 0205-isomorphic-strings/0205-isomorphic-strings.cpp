class Solution {
public:
    bool isIsomorphic(string s, string t) {

        // unordered_map<int>mpp;
        // if(s.size() != t.size()){
        //     return false;
        // }

        // for(int i =0;i<s.size();i++){

        //     mpp[s[i]] = t[i];

        // }

        int map_s[256] = {0};
        int map_tt[256] = {0};

        for(int i =0;i<s.size();i++){

            unsigned char ch_s=s[i];
            unsigned char ch_tt = t[i];


            if(map_s[ch_s] != map_tt[ch_tt]){
                return false;
            }

            map_s[ch_s] = i+1;
            map_tt[ch_tt] = i+1;
        }

return true;

        
    }
};