class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;
        int n = nums.size();

        while(start<= end){
            int mid = (start+end)/2;

            
            if(target == nums[n-1]){
                return n-1;


            }else if(target < nums[n-1]){
                

                if(nums[mid] > nums[n-1]){
                    start=mid+1;

                }else{
                    if(nums[mid] == target){
                        return mid;
                    }else{
                        if(nums[mid] > target){
                        end = mid-1;

                        }else{
                            start = mid+1;
                        }
                    }


                }


            }else{

                if(nums[mid] < nums[n-1]){
                    end = mid-1;
                }else{
                    if(nums[mid] == target){
                        return mid;
                    }else{
                        if(nums[mid] < target){
                            start = mid+1;
                        }else{
                            end = mid-1;
                        }
                    }
                }



            }

        }

        return -1;
    }
};