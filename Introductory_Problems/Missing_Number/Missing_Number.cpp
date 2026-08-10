/*
 * Problem Name: Missing_Number
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-10
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    int ans = n;
 
    for (int i = 1; i < n; i++) {
        ans ^= i;
    }
 
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        ans ^= x;
    }
 
    cout << ans << '\n';
 
    return 0;
}