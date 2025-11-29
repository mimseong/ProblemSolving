#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <math.h>

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

int n;
vector<string> v(105);
int mx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int my[] = {1, 1, 1, 0, -1, -1, -1, 0};

int solve(int x, int y) {
    int res = 0;
    
    for (int i = 0; i < 8; i++) { // 방향
        string found = "";
        for (int j = 0; j < 5; j++) { // MOBIS 글자 찾기
            int xj = x + (j * mx[i]);
            int yj = y + (j * my[i]);
            
            if (0 <= xj && xj < n && 0 <= yj && yj < n)
                found += v[xj][yj];
        }
        if (found == "MOBIS")
            res++;
    }
    
    return res;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        ans += solve(i, j);
    }
  }

  cout << ans << "\n";
  return 0;
}
