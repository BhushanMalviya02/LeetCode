class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> a(nums1.begin(),nums1.end());
        unordered_set<int> b(nums2.begin(),nums2.end());

        int ans1=0;
        int ans2 =0;

        for(int i =0;i<nums1.size();i++){
            if(b.count(nums1[i])){
                ans1++;
            }
        }

        for(int i =0;i<nums2.size();i++){
            if(a.count(nums2[i])){
                ans2++;
            }
        }
return {ans1,ans2};
auto init = []() { ios_base::sync_with_stdio(false); cin.tie(NULL); return 0; }();

    }
};