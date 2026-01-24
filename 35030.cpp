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

int v[100005];
bool isNotDecimal[1000005];

void solve() {
    int n;
    scanf("%d", &n);
    
    
}

int calc(int origin) {
    bool isAllDecimal = true;
    
    int n = origin;
    for (int i = 10; n > 0; i *= 10) {
        // cout << origin / i << " " << origin % i << endl;
        
        int idx = (origin / i ? origin / i : 1) * (origin % i) + 1;
        
        if (isNotDecimal[idx] == true) {
            isAllDecimal = false;
            break;
        }
        
        // printf("%d는 소수이다 %d\n", idx, !isNotDecimal[idx]);
        
        n /= 10;
    }

    return isAllDecimal ? 1 : 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    
    isNotDecimal[0] = true;
    isNotDecimal[1] = true;
  
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (isNotDecimal[i])
            continue ;
        
        for (int j = (i * 2); j <= 1000000 ; j += i)
            isNotDecimal[j] = true;
    }

    for (int i = 1; i <= 100000; i++) {
        v[i] = v[i-1] + calc(i);
    }
    
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        
        printf("%d\n", v[n]);
    }
    
    return 0;
}
