#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

#define xx first
#define yy second
#define all(x) (x).begin(), (x).end()
#define MAXV 987654321
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using iis = pair<int, string>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

int main() {
  int n, m, r;
  scanf("%d %d %d", &n, &m, &r);

  vector<int> adj[n + 1];
  for (int i = 0; i < m; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<bool> visited(n + 1, false);
  vector<int> height(n + 1, -1);
  queue<ii> q;
  q.push({r, 0});
  visited[r] = true;
  height[r] = 0;
  
  while(!q.empty()) {
      int curr = q.front().xx;
      int depth = q.front().yy;
      q.pop();
      
    //   cout << curr << " " << depth << "\n";
      for (int next: adj[curr])
        if (!visited[next]) {
            visited[next] = true;
            height[next] = depth + 1;
            q.push({next, depth + 1});
        }
  }
  
  for (int i = 1; i <= n; i++) {
      printf("%d\n", height[i]);
  }

  return 0;
}