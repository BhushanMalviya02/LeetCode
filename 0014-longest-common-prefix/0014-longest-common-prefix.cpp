class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // for(int i =0;i<strs.size();i++){
        //     for(int j =i+1;j<strs.size();j++){
        //         if(strs[i])
        //     }
        // }

        sort(strs.begin(),strs.end());

        string first = strs[0];
        string second = strs[strs.size()-1];
        string ans ="";

        int sz = min(first.size(),second.size());

        for(int i =0;i<sz;i++){
            if(first[i] != second[i]){
                break;
            }

            ans += first[i];

        }

        return ans;
    }
};