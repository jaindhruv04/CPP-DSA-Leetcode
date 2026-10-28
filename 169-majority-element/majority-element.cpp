class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (auto x : nums) {
            mp[x]++;
        }

        int maxFreq = 0;
        int ans = 0;

        for (auto p : mp) {
            if (p.second > maxFreq) {
                maxFreq = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};