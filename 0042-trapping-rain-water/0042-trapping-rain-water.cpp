class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j =height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int water=0;
        while(i<j){
            if(height[i]<height[j]){
                leftmax=max(leftmax,height[i]);
                if(height[i]<leftmax){
                    water +=leftmax-height[i];
                }i++;

            }else{
                rightmax=max(rightmax,height[j]);
                if(height[j]<rightmax){
                    water +=rightmax-height[j];
                }j--;
            }
        }
        return water;
        
    }
};