class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> degreeCounts(n, 0);

        for (const auto& road : roads) {
            ++degreeCounts[road[0]];
            ++degreeCounts[road[1]];
        }

        sort(degreeCounts.begin(), degreeCounts.end());

        long long maxImportance = 0;

        for (int i = 0; i < n; ++i) {
            maxImportance += static_cast<long long>(i + 1) * degreeCounts[i];
        }

        return maxImportance;
    }
};
