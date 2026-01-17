#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <bitset>
#include <stdio.h>
#include <math.h>
#include <sstream>
#include <cassert>
#include <climits>
#include <tuple>

#define xx first
#define yy second
#define all(x) (x).begin(), (x).end()
#define MAXV 987654321
#define FOR(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using iis = pair<int, string>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

void solve(int n) {
    vector<i64> v(n);
    FOR (i, n) {
        scanf("%lld", &v[i]);
    }
    
    if (n == 1) {
        cout << v[0] << endl;
        return;
    }
    
    int countOf0 = 0;
    int countOfPositive = 0;
    int countOfNegative = 0;
    
    FOR (i, n) {
        if (v[i] == 0) {
            countOf0++;
        } else if (v[i] > 0) {
            countOfPositive++;
        } else {
            countOfNegative++;
        }
    }
    
    sort(all(v));
    
    i64 ans = v[n-1];
    if (countOf0 > 0)
        ans = 0;
    if (countOfPositive > 0) {
        i64 x = 1;
        FOR (i, n) {
            if (v[i] > 0) x *= v[i];
        }
        ans = x;
    }
    if (countOfNegative > 1) {
        i64 x = 1;
        if (countOfNegative % 2 == 1)
            countOfNegative--;
        for (int i = 0; i < n; i++, countOfNegative--) {
            if (v[i] < 0 && countOfNegative > 0) {
                x *= v[i];
            }
        }
        
        if (ans > 0)
            ans *= x;
        else
            ans = x;
    }
    
    cout << ans << endl;
    
    
}

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  
  FOR(i, m) {
      solve(n);
  }

  return 0;
}