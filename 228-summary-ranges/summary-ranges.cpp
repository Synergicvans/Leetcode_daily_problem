class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        if (n == 0) return ans;

        int i = 0;
        while (i < n) {
            int start = nums[i];

            // Move i forward as long as next element is consecutive
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                i++;
            }

            if (start == nums[i]) {
                ans.push_back(to_string(start));
            } else {
                ans.push_back(to_string(start) + "->" + to_string(nums[i]));
            }

            i++;  // move to next range start
        }

        return ans;
    }
};
