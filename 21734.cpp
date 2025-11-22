#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        int n = s[i];
        
        string ns = to_string(n);

        int sum = 0;
        for (int j = 0; j < ns.size(); j++) {
            sum += ns[j] - '0';
        }
        
        for (int j = 0; j < sum; j++) {
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}
