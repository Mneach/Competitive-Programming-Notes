#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

/* 
Count the number of binary strings
with no consecutive ones that can 
be formed using a binary string
length of N

if N = 2 -> result = 3

00
01
10

*/

int bottomUp(vector<int> bottomUpArr, int n){

    bottomUpArr[0] = 1;
    bottomUpArr[1] = 2;

    for(int i = 2; i <= n; i++){
        bottomUpArr[i] = bottomUpArr[i - 1] + bottomUpArr[i - 2];
    }

    return bottomUpArr[n];
}

int topDown(vector<int> topDownArr, int n){
    
    if(n <= 0){
        return 1;
    }

    topDownArr[n] = topDown(topDownArr, n - 1) + topDown(topDownArr, n - 2);
    return topDownArr[n];
}

int recursive(int n){

    if(n <= 0) return 1;

    return recursive(n - 1) + recursive(n - 2);
}

int main(){

    int n;
    cin >> n;

    vector<int> topDownArr(n + 1);
    vector<int> bottomUpArr(n + 1);

    cout << recursive(n) << endl;
    cout << topDown(topDownArr, n) << endl;
    cout << bottomUp(bottomUpArr, n) << endl;

    return 0;
}