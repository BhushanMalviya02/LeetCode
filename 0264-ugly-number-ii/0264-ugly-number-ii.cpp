class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long,vector<long>,greater<long>>pq;

        unordered_set<long>visited;

        pq.push(1);
        visited.insert(1);

        long curr = 1;

        for(int i =0;i<n;i++){
            curr = pq.top();
            pq.pop();

            long num2 = curr *2;
            long num3= curr*3;
            long num5 = curr*5;

            // int nnum = min(num2,num3,num5);

            // pq.push(nnum);
            // visited.insert(nnum);

            if(visited.find(num2) == visited.end()){
                pq.push(num2);
                visited.insert(num2);
            }
            if(visited.find(num3) == visited.end()){
                pq.push(num3);
                visited.insert(num3);
            }if(visited.find(num5) == visited.end()){
                pq.push(num5);
                visited.insert(num5);
            }


        }
        return curr;
    }
};