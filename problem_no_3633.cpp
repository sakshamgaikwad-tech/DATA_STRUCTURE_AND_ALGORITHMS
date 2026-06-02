// https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/Problem no 


// You are given two categories of theme park attractions: land rides and water rides.

// Land rides
// landStartTime[i] – the earliest time the ith land ride can be boarded.
// landDuration[i] – how long the ith land ride lasts.
// Water rides
// waterStartTime[j] – the earliest time the jth water ride can be boarded.
// waterDuration[j] – how long the jth water ride lasts.
// A tourist must experience exactly one ride from each category, in either order.

// A ride may be started at its opening time or any later moment.
// If a ride is started at time t, it finishes at time t + duration.
// Immediately after finishing one ride the tourist may board the other (if it is already open) or wait until it opens.
// Return the earliest possible time at which the tourist can finish both rides.

 
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                         vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

               
                int landFinish = landStartTime[i] + landDuration[i];

                int waterStart = max(landFinish, waterStartTime[j]);
                int waterFinish = waterStart + waterDuration[j];

                ans = min(ans, waterFinish);

              
                int waterFinishFirst = waterStartTime[j] + waterDuration[j];

                int landStart = max(waterFinishFirst, landStartTime[i]);
                int landFinishSecond = landStart + landDuration[i];

                ans = min(ans, landFinishSecond);
            }
        }

        return ans;
    }
};
