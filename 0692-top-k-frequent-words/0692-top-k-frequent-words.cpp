class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mpp;

        for(auto x:words){
            mpp[x]++;
        }

        auto comp = [](const pair<int,string>&a , const pair<int,string>&b){
            if(a.first == b.first){
                return a.second < b.second;
            }
            return a.first > b.first;
        };

        priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(comp) > pq(comp);

        for(auto i : mpp){
            auto element = i.first;
            int freq = i.second;

            pair<int,string>curr = {freq,element};
            pq.push(curr);

            if(pq.size() > k){
                pq.pop();
            }
        }

vector<string>res;

while(!pq.empty()){
    res.push_back(pq.top().second);
    pq.pop();
}

reverse(res.begin(),res.end());
return res;
    }
};