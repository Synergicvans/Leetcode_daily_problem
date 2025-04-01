class Solution {
public:
    vector<long long> dp; // DP array for memoization

    long long solve(int i, vector<vector<int>>& questions) {
        int n = questions.size();
        if (i >= n) return 0; // Base case: No more questions left

        if (dp[i] != -1) return dp[i]; // Return cached result if already computed

        // Choice 1: Solve the question
        long long take = questions[i][0] + solve(i + questions[i][1] + 1, questions);
        
        // Choice 2: Skip the question
        long long skip = solve(i + 1, questions);

        return dp[i] = max(take, skip); // Store and return the best result
    }

    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        dp.resize(n, -1); // Initialize DP array
        return solve(0, questions); // Start from the first question
    }
};
