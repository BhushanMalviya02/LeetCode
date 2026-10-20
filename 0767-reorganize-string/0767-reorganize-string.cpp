class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char,int>mpp;

        priority_queue<pair<int,char>>pq;

        string res= "";

        for(auto x : s){
            mpp[x]++;
        }


        for(auto i : mpp){

            int freq = i.second;
            char ch = i.first;
            pair<int,char>curr = {freq,ch};

            pq.push(curr);

        }

        int jute = 0;

        while(!pq.empty()){

            pair<int,char>p = pq.top();
            pq.pop();
            

            if(res.size() == 0 or res[jute -1] != p.second ){
                
                res+= p.second;
                jute++;

                p.first--;

                if(p.first > 0){
                    pq.push(p);
                }
                
                // jute
            }else{
                if(pq.empty()){
                    return "";
                }

                

                pair<int,char>p1 = pq.top();
                pq.pop();

                res+= p1.second;

                jute++;
                p1.first--;
                if(p1.first > 0){
                    pq.push(p1);
                }

                pq.push(p);





            }

        }

return res;
        
    }
};