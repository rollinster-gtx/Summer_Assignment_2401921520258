/*
Problem: Maximum Average Subarray I
LeetCode: 643
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        long long maxSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
};
