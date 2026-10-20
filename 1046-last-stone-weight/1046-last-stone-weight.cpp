class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {


        priority_queue<int>pq;

        for(auto x : stones){

            pq.push(x);
        }

        while(pq.size()  > 1 ){
            int s1 = pq.top();
            pq.pop();
            int s2  =pq.top();
            pq.pop();


            if(s1 == s2){
                //;

            }else{
                int ns = s1-s2;
                pq.push(ns);

            }
        }

// return pq.top();

if(pq.empty()){
    return 0;
}
return pq.top();
        
    }
};