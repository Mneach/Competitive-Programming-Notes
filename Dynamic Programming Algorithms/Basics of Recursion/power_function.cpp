#include <bits/stdc++.h>

using namespace std;

// Power Function
// write a function to find power of a number
// both number & power are given as input!
// time complexity O(N)

int power(int a , int n){

    if(n == 0) return 1;

    return a * power(a, n - 1);
}

int main(){

    int a, n;
    cin >> a >> n;

    cout << power(a , n) << endl;

    return 0;
}