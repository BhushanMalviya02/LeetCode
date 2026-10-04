class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // int count =0;
        // int k = flowerbed.size();
        // for(int i =0 ;i<flowerbed.size();i++){
        //     if(flowerbed[i] == 0){

        //         if(i == 0 and flowerbed[i+1] == 0){
        //             count++;
        //             flowerbed[i] =1;
        //             continue;
        //         }

        //         if(i ==k-1  and  flowerbed[k-2] ==0 ){
        //             count++;
        //             flowerbed[i] =1;
        //             continue;
        //         }

        //         if(flowerbed[i-1] == 0 and flowerbed[i+1] == 0){
        //             count++;
        //             flowerbed[i] =1;
        //             continue;
        //         }






        //         // count++;
        //         // flowerbed[i] =1;
        //         // i++;
        //     }
        // }
        // if(count >= n){
        //     return true;
        // }
        // return false;




        int k = flowerbed.size();

        int count =0;

        for(int i =0;i<k;i++){

           

            if(flowerbed[i] ==0){
                bool left = (i == 0 or flowerbed[i-1] ==0 );
                bool right = (i == k-1 or flowerbed[i+1] ==0);


                if(left and right ){
                    count++;
                    flowerbed[i] =1;

                }


            }
        }
        if(count >= n){
            return true;
        }
        return false;
    }
};