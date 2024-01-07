#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n == 0) return;

    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << from_rod << " -> " << to_rod << " " << aux_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

void solve() {

    int n = 2;

    cin >> n;
    
    towerOfHanoi(n, 'A', 'B', 'C');
}

int main() {
    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}