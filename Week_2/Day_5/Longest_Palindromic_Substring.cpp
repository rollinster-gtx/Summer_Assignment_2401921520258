/*
Problem: Longest Palindromic Substring
LeetCode: 5

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    string longestPalindrome(string s) {

        int start = 0;
        int maxLen = 1;

        for(int i = 0; i < s.size(); i++) {

            // Odd Length Palindrome
            int left = i, right = i;

            while(left >= 0 && right < s.size() &&
                  s[left] == s[right]) {

                if(right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }

                left--;
                right++;
            }

            // Even Length Palindrome
            left = i;
            right = i + 1;

            while(left >= 0 && right < s.size() &&
                  s[left] == s[right]) {

                if(right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};
