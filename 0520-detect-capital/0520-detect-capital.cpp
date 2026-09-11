class Solution {
public:
    bool detectCapitalUse(string word) {
        int count =0;
        for(char ch : word){
            if(isupper(ch)){
                count++;
            }
        }

        if(count == word.size() or count == 0){
            return true;
        }

        if(count == 1 and isupper(word[0])){
            return true;
        }



        return false;

        
        
    }
};