class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i =1;
        set<int>s(nums.begin(),nums.end());

        while(true){
            if(!s.contains(k*i)){
                return k*i;

            }
            i++;
        }

        return k*i;
    }
};