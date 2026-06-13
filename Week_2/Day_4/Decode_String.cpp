/*
Problem: Decode String
LeetCode: 394

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string decodeString(string s) {

        stack<int> countStack;
        stack<string> stringStack;

        string currString = "";
        int currNum = 0;

        for(char ch : s) {

            if(isdigit(ch)) {
                currNum = currNum * 10 + (ch - '0');
            }

            else if(ch == '[') {
                countStack.push(currNum);
                stringStack.push(currString);

                currNum = 0;
                currString = "";
            }

            else if(ch == ']') {

                int repeat = countStack.top();
                countStack.pop();

                string temp = currString;

                for(int i = 1; i < repeat; i++) {
                    currString += temp;
                }

                currString = stringStack.top() + currString;
                stringStack.pop();
            }

            else {
                currString += ch;
            }
        }

        return currString;
    }
};
