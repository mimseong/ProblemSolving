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

ii lights[200000];
int dists[200000];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int H, N;
    cin >> H >> N;
    
    FOR(i, N) {
        int c;
        cin >> c >> c;
        lights[i] = {c, i};
    }

    sort(lights, lights + N, greater<ii>());
    FOR(i, N) {
        const ii &light = lights[i];
        dists[light.second] = N - i;
    }

    cout << "YES\n";
    FOR(i, N) {
        cout << dists[i] << " ";
    }
    cout << endl;
    
    return 0;
}