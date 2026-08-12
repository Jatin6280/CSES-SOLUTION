/*
 * Problem Name: Number_Spiral
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-12
 */

  #include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    while (n--) {
        long long y, x;
        cin >> y >> x; // Fixed input order: row y, then column x
 
        if (x == y) {
            cout << x * x - x + 1 << "\n";
        }
        else if (x > y) {
            if (x % 2 == 0) {
                cout << (x - 1) * (x - 1) + y << "\n";
            } else {
                cout << x * x - y + 1 << "\n";
            }
        }
        else { // y > x
            if (y % 2 == 0) {
                cout << y * y - x + 1 << "\n";
            } else {
                cout << (y - 1) * (y - 1) + x << "\n";
            }
        }
    }
    return 0;
}