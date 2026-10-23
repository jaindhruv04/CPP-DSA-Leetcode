
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> used;

    void solve(vector<int>& nums) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i] == true) {
                continue;
            }

            temp.push_back(nums[i]);
            used[i] = true;

            solve(nums);

            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        used.resize(nums.size(), false);

        solve(nums);

        return ans;
    }
};
