/*
Problem: Find the Index of the First Occurrence in a String
LeetCode: 28

Time Complexity: O((n-m+1) * m)
Space Complexity: O(1)
*/

class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        for(int i = 0; i <= n - m; i++) {

            int j = 0;

            while(j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            if(j == m)
                return i;
        }

        return -1;
    }
};
