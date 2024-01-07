#include <bits/stdc++.h>

using namespace std;

// write a function to check if a number is odd or even

void solve(){
    int x;
    cin >> x;

    if(x&1){
        cout << "Odd Number" << endl;
    }else{
        cout << "Even Number" << endl;
    }
}

int main(){

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}