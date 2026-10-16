class Solution {
public:


    struct compare{
        bool operator()(const pair<int,string>&a,
                        const pair<int,string>&b)const{

                            if(a.first != b.first){

                                return a.first > b.first;

                            }

                            return a.second < b.second;

                        }
    };


    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string,int>mpp;
        vector<string>res;

        for(string x : words){
            mpp[x]++;
        }

        priority_queue<pair<int,string>,
                        vector<pair<int,string>>,
                        compare > pq;


        for(auto i : mpp){

            string element = i.first;
            int freq = i.second;


            pair<int,string>curr = {freq,element};

            pq.push(curr);

            if(pq.size() > k){
                pq.pop();
            }
        }


        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }

        reverse(res.begin(),res.end());

        


        return res;
    }
};