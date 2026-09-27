class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> disSpeed(n);

        for (int i = 0; i < n; i++) {
            pair<int, int> temp(position[i], speed[i]);
            disSpeed[i] = {position[i], speed[i]};
        }

        sort(disSpeed.rbegin(), disSpeed.rend());

        vector<double> time(n);

        for (int i = 0; i < n; i++) {

            double t =
                (double)(target - disSpeed[i].first) / disSpeed[i].second;
            time[i] = t;
        }

        int ans = 0;
        double lastTime = 0;

        for (int i = 0; i < time.size(); i++) {

            if (time[i] > lastTime) {
                ans++;
                lastTime = time[i];
            }
        }

        return ans;
    }
};