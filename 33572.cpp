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

int main()
{
  i64 n, m;
  scanf("%lld %lld", &n, &m);
  
  vector<i64> v(n);
  FOR (i, n) scanf("%lld", &v[i]);
  
  FOR (i, n) {
      m -= v[i] - 1;
  }
  
  if (m > 0) {
      printf("OUT\n");
  } else {
      printf("DIMI\n");
  }
  
  return 0;
}