class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        vector<bool> dp(s.size() + 1, false);

        dp[0] = true;

        for (int i = 0; i < s.size(); i++) {

            if (!dp[i])
                continue;

            for (int j = i + 1; j <= s.size(); j++) {

                auto it =
                    find(wordDict.begin(), wordDict.end(), s.substr(i, j - i));

                if (it != wordDict.end()) {
                    dp[j] = true;
                }
            }
        }

        return dp[s.size()];
    }
};