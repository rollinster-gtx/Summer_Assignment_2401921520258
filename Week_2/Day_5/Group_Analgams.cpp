/*
Problem: Group Anagrams
LeetCode: 49

Time Complexity: O(n * k log k)
Space Complexity: O(n * k)

where:
n = number of strings
k = average string length
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string str : strs) {

            string key = str;
            sort(key.begin(), key.end());

            mp[key].push_back(str);
        }

        vector<vector<string>> ans;

        for(auto &it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
