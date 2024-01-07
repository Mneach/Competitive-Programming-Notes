#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

// Power Function
// write a function to find power of a number
// both number & power are given as input!
// time complexity O(log N)
// algorithm -> binary exponential algorithm

// Logic
// if n is odd then x^n = x * (n ^ n / 2) ^ 2, why we multiple by x *, because when n is integer and n is odd , n / 2 is round down
// if n is even then x^n = (n ^ n / 2) ^ 2

long long power(long long a , long long n){
    
    if(n == 0) return 1;

    long long subProblem = power(a , n / 2);
    long long subProblemSquare = subProblem * subProblem;

    if(n & 1){
        return a * subProblemSquare;
    }

    return subProblemSquare;
}

int main(){

    int a, n;
    cin >> a >> n;

    cout << power(a , n) << endl;

    return 0;
}