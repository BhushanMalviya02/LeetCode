class Solution {
public:

    bool helper(vector<int>& position, int m,int guess){

        int ball = 1;
        int prev = 0;

        for(int i = 1 ;i<position.size();i++){
            if(position[i] - position[prev]  >= guess){
                ball++;
                prev = i;
            }else{
                continue;
            }

        }

        if(ball >= m){
            return true;
        }else{
            return false;
        }

    }

    int maxDistance(vector<int>& position, int m) {
       sort(position.begin(),position.end());
       int n = position.size();
       int start = 1;
       int end = position[n-1] - position[0];
       int res =0;

       while(start <= end){
        int mid = (start+end)/2;

        if(helper(position ,m ,mid)){
            res = mid;
            start = mid+1;
        }else{
            end = mid -1;
        }

       }
return res;
    }
};