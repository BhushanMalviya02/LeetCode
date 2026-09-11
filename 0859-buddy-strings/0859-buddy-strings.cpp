class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        // unordered_map<int,int>mpp(26,0);

        // for(int i =0;i<s.size();i++){
        //     mpp[s[i] - 'a']++;
        //     mpp[goal[i] - 'a']--;
        // }

int i =0;
int j =0;
// int diff =0;
// int same =0;

if(s == goal){

unordered_set<char> unique_chars(s.begin(), s.end());
            return unique_chars.size() < s.size();
}

// i=0;
// j=0;

        vector<int> diff;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }

        // Must have exactly 2 differences that cross-match
        return diff.size() == 2 && 
               s[diff[0]] == goal[diff[1]] && 
               s[diff[1]] == goal[diff[0]];

    }
};