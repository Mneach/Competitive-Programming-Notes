#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

// given a "4 x n" and tiles of size
// "4 x 1", count the number of ways
// to tile the given board using the 4 x 1 tiles

// a tile either be placed horizontally
// i.e as a 1 x 4 tile or vertically
// i.e as a 4 x 1 tile

// input -> n
// output -> number of ways

long long recursive(int n){
    if(n <= 3) return 1;

    return recursive(n - 1) + recursive(n - 4);
}

long long dp(vector<int> &arr, int n){

    if(n <= 3) return 1;

    if(arr[n] != -1) return arr[n];

    arr[n] = dp(arr, n - 1) + dp(arr, n - 4);
    return arr[n];
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n + 1, -1);

    cout << recursive(n) << endl;

    cout << dp(arr, n) << endl;

    return 0;
}