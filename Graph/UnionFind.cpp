#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int find(int x) {
    if(x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}

bool unite(int a, int b) {
    int fa = find(a);
    int fb = find(b);
    if(fa == fb) return false;
    parent[fb] = fa;
    return true;
}

int main() {
    int n;
    cin >> n;

    parent.resize(n);
    for(int i=0; i<n; i++) parent[i] = i;
}