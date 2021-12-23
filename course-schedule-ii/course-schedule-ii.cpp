class Solution {
public:
  vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
    vector<vector<int>> adjList(n);
    vector<int> indegree(n, 0);
    for (auto &pr : prerequisites) {
      adjList[pr[1]].push_back(pr[0]);
      ++indegree[pr[0]];
    }
    queue<int> q;
    for (int i = 0; i < n; ++i) {
      if (indegree[i] == 0) {
        q.push(i);
      }
    }
    vector<int> ans;
    int visitCount = 0;
    while (!q.empty()) {
      auto prereq = q.front();
      q.pop();
      ans.push_back(prereq);
      ++visitCount;
      for (auto &course : adjList[prereq]) {
        --indegree[course];
        if (indegree[course] == 0) {
          q.push(course);
        }
      }
    }
    return visitCount == n ? ans : vector<int>{};
  }};