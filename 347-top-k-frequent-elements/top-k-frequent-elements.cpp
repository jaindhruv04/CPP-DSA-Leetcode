class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (auto i : nums) {
            mp[i]++;
        }

        vector<int> ans;

        while (k != 0) {
            int element = mp.begin()->first;

            for (auto p : mp) {
                if (p.second > mp[element]) {
                    element = p.first;
                }
            }

            ans.push_back(element);
            mp.erase(element);
            k--;
        }

        return ans;
    }
};