class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mpp;

        vector<int>res;

        for(auto x : nums){
            mpp[x]++;
        }

        priority_queue<pair<int,int>,
                        vector<pair<int,int>>,
                        greater<pair<int,int>>> pq;

        for(auto i : mpp){

            int element = i.first;
            int freq = i.second;

            pair<int,int>curr = {freq,element};

            pq.push(curr);

            if(pq.size() > k){
                pq.pop();
            }
        }


        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }

return res;

        
    }
};