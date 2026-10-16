class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {


        // unordered_map<int,int>mpp;

         vector<int>res;

        // for(auto i : arr){

        //     int dist = abs(i - x);

        //     mpp[i]= dist;
        // }

        priority_queue<pair<int,int>>pq;

        
        for(auto m : arr){

            // int distance = m.second;
            // int element = m.first;

            int distance = abs(m-x);


            // pair<int,int>curr= {distance,element};

            pq.push({distance,m});


            if(pq.size() > k){
                pq.pop();
            }
        }

        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }

        sort(res.begin(),res.end());

        return res;
        
    }
};