class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {

        // priority_queue<pair<int,int>>pq;
        // int res =0;

        // for(auto i : courses){

        //     int dur = i[0];
        //     int last = i[1];

        //     pair<int,int>curr={last,dur};

        //     pq.push(curr);
        // }

        // int days =1;

        // while(!pq.empty()){
            
        //     days += pq.top().second;


        //     if(pq.top().first < days ){
        //         res++;
        //     }
        //     pq.pop();
        // }

        
        // return res;

        sort(courses.begin(),courses.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        int curr_time =0;


        priority_queue<int>pq;

        for(auto i : courses){
            
            int dur = i[0];
            int max_dur = i[1];

            curr_time += dur;
            pq.push(dur);

            if(curr_time > max_dur){
                curr_time -= pq.top();
                pq.pop(); 
            }


        }
        return pq.size();

    }
};