class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int second = 0;
        int fresh = 0;

        queue<pair<int, int>> rotten;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    rotten.push({i, j});
                } else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        if (fresh == 0) {
            return 0;
        }

        while (!rotten.empty()) {
            int size = rotten.size();
            bool rotted = false;

            for (int i = 0; i < size; i++) {
                pair<int, int> temp = rotten.front();
                rotten.pop();
                int a = temp.first;
                int b = temp.second;

                if (a - 1 >= 0 && grid[a - 1][b] == 1) {
                    grid[a - 1][b] = 2;
                    rotten.push({a - 1, b});
                    fresh--;
                    rotted = true;
                }

                if (a + 1 < n && grid[a + 1][b] == 1) {
                    grid[a + 1][b] = 2;
                    rotten.push({a + 1, b});
                    fresh--;
                    rotted = true;
                }

                if (b - 1 >= 0 && grid[a][b - 1] == 1) {
                    grid[a][b - 1] = 2;
                    rotten.push({a, b - 1});
                    fresh--;
                    rotted = true;
                }

                if (b + 1 < m && grid[a][b + 1] == 1) {
                    grid[a][b + 1] = 2;
                    rotten.push({a, b + 1});
                    fresh--;
                    rotted = true;
                }
            }

            if (rotted) {
                second++;
            }
        }

        if (fresh > 0) {
            return -1;
        }

        return second;
    }
};