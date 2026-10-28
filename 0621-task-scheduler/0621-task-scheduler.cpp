class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        unordered_map<char,int>mpp;

        priority_queue<pair<int,char>>pq;

        for(auto x : tasks){

            mpp[x]++;
        }

        for(auto i : mpp){

            int elem = i.first;
            int freq = i.second;

            pair<int ,char>curr = {freq,elem};
            pq.push(curr);
        }

        int res = 0;


        while(!pq.empty()){

            vector<pair<int,char>>temp;
            int count = n+1;

            while(count > 0 and !pq.empty()){
                auto p = pq.top();
                pq.pop();

                int freq = p.first;
                int elem = p.second;

                freq--;
                if(freq>0){
                    temp.push_back({freq,elem});
                }
                res++;
                count--;
            }
            for(auto p : temp){
                pq.push(p);
            }

            if(!pq.empty()){
                res+=count;
            }


        }
        return res; 
    }
};