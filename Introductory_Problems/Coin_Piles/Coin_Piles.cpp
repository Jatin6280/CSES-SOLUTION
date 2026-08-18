/*
 * Problem Name: Coin_Piles
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-18
 */

#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}