class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // int n = nums.size();

        unordered_map<int,int> freq;

        for(auto x:nums){
            freq[x]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;


        for(auto i :freq){
            int element = i.first;
            int freq = i.second;

            pair<int,int>curr = {freq,element};

            // if(pq.size() > k){
                pq.push(curr);
                // continue;
            // }

            // if(curr.first < pq.top().first){
            //     continue;
            // }
            if(pq.size() > k){
                pq.pop();
            }
            
            // pq.push(curr);
  
        }

vector<int>res;
while(!pq.empty()){
    res.push_back(pq.top().second);
    pq.pop();
}




        // struct cmp{
        //     bool operator()(pair<int,int>&a , pair<int,int>&b){
        //         if(a.first != b.first){
        //             return a.first > b.first;
        //         }

        //         return a.second > b.second;

        //     }
        // };


        
return res;
    }
};