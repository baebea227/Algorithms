#include <bits/stdc++.h>
using namespace std;

int find(int x, vector<int>& parent) {
    if(parent[x] == x)
        parent[x] = find(parent[x], parent);
    return parent[x];
}

bool unite(int a, int b, vector<int>& parent) {
    a = find(a, parent);
    b = find(b, parent);
    if(a == b) return false;
    parent[b] = a;
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> parent(n);
    for(int i=0; i<n; i++) {
        parent[i] = i;
    }
}