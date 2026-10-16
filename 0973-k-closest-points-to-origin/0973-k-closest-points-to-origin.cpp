class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        // vector<float>dist;
        vector<vector<int>>res;

        // unordered_map<vector<vector<int>>,float>mpp;

        // for(auto x : points){

        //     float d = sqrt((x.first*s.first) + (x.second*x.second));

        //     mpp[x]= d;


        // }

        priority_queue<pair<int,vector<int>>>pq;
        

        for(auto& i : points){

            // float distance = i.second;
            // vector<vector<int>>pt = i.first;

            int x = i[0];
            int y=i[1];

            int dist = x*x + y*y;

            pair<int,vector<int>>curr = {dist,i};

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