/*
 * Problem Name: Increasing_Array
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-11
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long moves = 0;
 
    for (int i = 1; i < n; i++) {
        int current = a[i];
        int prev = a[i - 1];
 
        if (current < prev) {
            moves += prev - current;
            a[i] = prev;
        }
    }
 
    cout << moves << endl;
 
    return 0;
}