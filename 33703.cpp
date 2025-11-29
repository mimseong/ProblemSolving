#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    long long ans = 0;
    for (int i = 1; i < n; i++) {
        ans += n - i;
        ans += 1;
    }
    ans++;
    
    cout << ans << "\n";
    
    return 0;
}
