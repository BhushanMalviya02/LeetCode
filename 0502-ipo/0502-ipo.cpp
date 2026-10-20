class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
            int n = profits.size();
            vector<pair<int,int>>temp;

            for(int i =0;i<n;i++){
                temp.push_back({capital[i],profits[i]});
            }

            sort(temp.begin(),temp.end());

            int idx =0;

            priority_queue<int>pq;
            
            for(int step =0;step<k;step++){
            
            while(idx< n){
                if(temp[idx].first > w){
                    break;
                }
                pq.push(temp[idx].second);

                idx++;
            }

            if(pq.empty()){
            break;
            }

            int pro = pq.top();
            pq.pop();

            w+=pro;

            }
            return w;








        // vector<pair<int,int>>temp;
        // for(int i =0;i<capital.size();i++){
        //     temp.push_back({profits[i],capital[i]});
        // }


        // if(k > profits.size()){
        //     k = profits.size();
        // }

        
        

        //  for(int step =0;step<k;step++){

        //     vector<pair<int,int>>choices;
        //     // 


        //     for(int i =0;i<temp.size();i++){

        //     if(temp[i].second <= w){
        //         choices.push_back({temp[i].first,temp[i].second});
        //     }

        //     }

        //     // 

        //     if(choices.empty()){
        //         break;
        //     }


        //     priority_queue<pair<int,int>>pq;
            
        //     for(auto x : choices){
        //         int cap = x.second;
        //         int pro = x.first;

        //         pair<int,int>curr = {pro,cap};

        //         pq.push(curr); 
        //     }


        //     w+=pq.top().first;
        //     // pq.pop();

        //     auto it = find(temp.begin(),temp.end(),pair<int,int>{pq.top().first,pq.top().second});

        //     // erase(temp,);

        //     if(it != temp.end() ){
        //         temp.erase(it);
        //     }


        //  }

        //  return w;
    }
};