#include <bits/stdc++.h>

// Print numbers 1...N recursivly in increasing & decreasing order

using namespace std;

void printIncreasingOrder(int current, int n){
    if(current == n + 1){
        cout << endl;
        return;
    }

    cout << current << " ";
    printIncreasingOrder(current + 1, n);
}

void printDecreasingOrder(int n){
    if(n == 0){
        cout << endl;
        return;
    }

    cout << n << " ";
    printDecreasingOrder(n - 1);
}

int main(){

    int n = 5;

    printIncreasingOrder(1, n);
    printDecreasingOrder(n);

    return 0;
}