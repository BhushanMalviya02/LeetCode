class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // priority_queue<int, vector<int>, greater<int>> pq;
        // unordered_set<int> in_heap;
        // if (nums.size() == 1) {
        //     return nums[0];
        // }
        // if (nums.size() == 2) {
        //     if (nums[0] > nums[1]) {
        //         return nums[0];
        //     }

        //     return nums[1];
        // }

    //     for (int num : nums) {
    //         if(in_heap.count(num)) {
    //             continue;
    //         }

    //         pq.push(num);
    //         in_heap.insert(num);

    //         if(pq.size() > 3) {
    //             in_heap.erase(pq.top());
    //             pq.pop();
    //         }
    //     }

    //     if (pq.size() < 3) {
    //         while (pq.size() > 1) {
    //             pq.pop();
    //         }
    //     }
    //     return pq.top();
    
    set<int> s;

    for(auto num : nums){
        s.insert(num);

        if(s.size() > 3){
            s.erase(s.begin());

        }
    }


    if(s.size() == 3){
        return *s.begin();
    }

    return *s.rbegin();
    
    }
};