/*
Problem: Number of Recent Calls
LeetCode: 933

Time Complexity:
ping() -> O(1) amortized

Space Complexity: O(n)
*/

class RecentCounter {
public:
    
    queue<int> q;

    RecentCounter() {
        
    }

    int ping(int t) {

        q.push(t);

        while(!q.empty() && q.front() < t - 3000) {
            q.pop();
        }

        return q.size();
    }
};
