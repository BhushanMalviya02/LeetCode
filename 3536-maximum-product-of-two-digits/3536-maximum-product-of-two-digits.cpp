class Solution {
public:
    int maxProduct(int n) {
        vector<int>temp;

        while(n>0){
            int dig = n%10;

            temp.push_back(dig);

            n/=10;


        }

        sort(temp.begin(),temp.end());

        return temp[temp.size()-1]*temp[temp.size()-2];
        

    }
};