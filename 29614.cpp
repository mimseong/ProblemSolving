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

int main() {
    string s;
    cin >> s;
    
    double sum = 0;
    int countOfPlus = 0;
    FOR (i, s.size()) {
        if (s[i] == '+') { 
            sum += 0.5;
            countOfPlus++;
        }
        else if (s[i] == 'A') sum += 4;
        else if (s[i] == 'B') sum += 3;
        else if (s[i] == 'C') sum += 2;
        else if (s[i] == 'D') sum += 1;
    }
    
    cout << sum / (s.size() - countOfPlus) << endl;
    
    return 0;
}