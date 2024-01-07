#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

/* 

Given n friends who want to go party, each one can
remain single or can be paired up with some other
friend, Each friend can be paired only once. Find out
the total number of ways in which friends can remain 
single or can be paired up.

input = n;

n = 2 -> 3
-> (a) (b)
-> (ab)

n = 3 -> 4
-> (a) (b) (c)
-> (ab) (c)
-> (ac) (b)
-> (bc) (a)

formula = f(n - 1) * ((n - 1) * f(n - 2))

f(n - 1) -> because people go alone to the party, so the formula is -> 1 * (n - 1)
((n - 1) * f(n - 2)) -> because people go pair to the party, 
-> (n - 1) -> because there is a (n - 1) pairs available
-> f(n - 2) -> because there is a f(n - 2) remaning people

*/

int topDown(vector<int> arr, int n){

    if(n <= 1){
        return 1;
    }else if(n == 2){
        return 2;   
    }

    if(arr[n] != -1) return arr[n];

    arr[n] = topDown(arr, n - 1) + ((n - 1) * topDown(arr, n - 2));
    return arr[n]; 
}

int bottomUp(vector<int> arr, int n){

    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i <= n; i++){
        arr[i] = arr[i - 1] + ((i - 1) * arr[i - 2]);
    }

    return arr[n];
}

int recursive(int n){

    if(n <= 1) return 1;

    return recursive(n - 1) + ((n - 1) * recursive(n - 2));
}

int main(){

    int n;
    cin >> n;

    vector<int> arrTopDown(n + 1, -1);
    vector<int> arrBottomUp(n + 1);

    cout << recursive(n) << endl;
    cout << topDown(arrTopDown, n) << endl;
    cout << bottomUp(arrBottomUp, n) << endl;

    return 0;
}