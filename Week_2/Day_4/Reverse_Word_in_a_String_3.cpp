/*
Problem: Reverse Words in a String III
LeetCode: 557

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    string reverseWords(string s) {

        int start = 0;

        for(int end = 0; end <= s.size(); end++) {

            if(end == s.size() || s[end] == ' ') {

                reverse(s.begin() + start, s.begin() + end);

                start = end + 1;
            }
        }

        return s;
    }
};
