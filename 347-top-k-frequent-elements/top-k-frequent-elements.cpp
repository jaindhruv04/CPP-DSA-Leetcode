class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (auto i : nums) {
            mp[i]++;
        }

        vector<int> ans;
        vector<pair<int, int>> freq;

        for (auto i : mp) {
            freq.push_back({i.first, i.second});
        }

        for (int i = 0; i < freq.size(); i++) {
            for (int j = i + 1; j < freq.size(); j++) {
                if (freq[j].second > freq[i].second) {
                    swap(freq[i], freq[j]);
                }
            }
        }

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};