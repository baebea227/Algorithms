#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> LIS;

    for(int i=0; i<n; i++) {
        int cur;
        cin >> cur;
        
        if(LIS.empty() || cur > LIS.back()) {
            LIS.push_back(cur);
        } else {
            *lower_bound(LIS.begin(), LIS.end(), cur) = cur;
        }
    }

    cout << LIS.size() << '\n';
}