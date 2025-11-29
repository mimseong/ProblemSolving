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

bool is_integer(double x) {
  return x == (int)x;
}

bool is_divided_by_two(int x) {
  if (x % 2 != 0 || 0 >= x / 2) {
    return false;
  }
  
  x = x / 2;

  if (x == 1) {
    return true;
  }

  return is_divided_by_two(x);
}

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  if (b * b - 4 * a * c <= 0) {
    printf("둘다틀렸근\n");
    return 0;
  }
  
  double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

  if (!is_integer(x1) || !is_integer(x2)) {
    printf("둘다틀렸근\n");
    return 0;
  }
  
  if (is_divided_by_two(x1) && is_divided_by_two(x2)) {
    printf("이수근\n");
  } else if (is_integer(x1) && is_integer(x2)) {
    printf("정수근\n");
  } else {
    printf("둘다틀렸근\n");
  }

  return 0;
}
