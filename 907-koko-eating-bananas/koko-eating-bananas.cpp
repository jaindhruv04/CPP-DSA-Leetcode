class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        if (piles.size() > h) {
            return -1;
        }

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {

            int mid = low + (high - low) / 2;

            long long time = 0;

            for (auto i : piles) {

                if (i % mid != 0) {

                    time = time + (i / mid) + 1;
                } else {
                    time = time + (i / mid);
                }
            }
            if (time > h) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};