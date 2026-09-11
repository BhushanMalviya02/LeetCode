class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        // for(int i =0;i<)

        int nl = name.size();
        int tl = typed.size();

        int i =0;
        int j = 0;

        while(i < nl or j < tl){
            // while(name[i] == typed[j] ){
            //     j++;
            // }
            // i++;
            // if(name[i] != typed[j]){
            //     return false;
            // }

            if(i<nl and name[i] == typed[j]){
                i++;
                j++;
            }else if(j > 0 and typed[j] == typed[j-1]){
                j++;
            }else{
                return false;
            }
            
        }

        return true;
        
    }
};