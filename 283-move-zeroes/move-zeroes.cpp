class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int time = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                time++;
            }
        }

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        for (int i = nums.size() - time; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};