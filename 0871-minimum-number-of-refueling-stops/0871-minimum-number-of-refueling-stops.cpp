class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        // sort(stations.begin().stations.end());

        // priority_queue<int>pq;

        // int st= 10;

        // for(auto i : stations){

        //     int dist = i[0];
        //     int sf = i[1];
    
        // }

        // vector<int>temp;

        // for(auto m : stations){
        //     if(st > m[0]){
        //         break;
        //     }

        //     temp.push_back(m[1]);
        // }

        priority_queue<int>pq;

        int curr_fuel = startFuel;

        int stops =0;
        int i = 0;
        int n = stations.size();



        while( curr_fuel < target){

            while(i<n and curr_fuel >= stations[i][0]){

                pq.push(stations[i][1]);
                i++;

            }

            if(pq.empty()){
                return -1;
            }


            curr_fuel += pq.top();
            pq.pop();
            stops++;


        }



return stops;

    }
};