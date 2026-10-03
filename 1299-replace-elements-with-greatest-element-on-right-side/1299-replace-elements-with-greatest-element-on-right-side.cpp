class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_val = -1;

        for(int i = arr.size()-1 ;i>=0 ;i--){

            int temp = arr[i];

            arr[i] = max_val;


            if(temp > max_val){
                max_val = temp;
            }

            

        }

        return arr;
    }
};