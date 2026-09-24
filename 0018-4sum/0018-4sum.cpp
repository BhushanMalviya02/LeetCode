class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        
        map<vector<int>,int>mpp;
        
        
        for(int i=0;i<arr.size();i++){
            
            // while( i > 0 and arr[i] == arr[i-1]){
            //     continue;
            // }
           
            
            for(int j= i+1;j<arr.size();j++){
                
                // while( j > i+1 and arr[j] == arr[j-1]){
                //   continue;
                // }
                // int sum;
                int k = j+1;
                int l = arr.size()-1;
                
                while(k<l){
                       
                long long  sum = (long long)arr[i] + arr[j]+ arr[k]+arr[l];
                
                if(sum  == target){
                    
                    vector<int>temp = {arr[i],arr[j],arr[k],arr[l]};
                // temp.push_back();
                
                if(mpp.find(temp) == mpp.end()){
                    res.push_back(temp);
                    mpp[temp] =1;
            
                }
                    // res.push_back();
                    k++;
                    l--;
                    
                }else if(sum < target){
                    k++;
                    
                }else{ 
                    l--;
                    
                }
                }
                
                
             
            }
        }
       

        
        return res;
    }
};