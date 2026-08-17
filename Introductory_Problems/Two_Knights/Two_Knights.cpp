/*
 * Problem Name: Two_Knights
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-17
 */

 #include <iostream>
 
using namespace std;
 
int main() {
    // Optimize standard input/output streams for speed
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n;
    cin >> n;
 
    for (long long k = 1; k <= n; ++k) {
        // Total ways to place 2 knights on a k x k board: C(k^2, 2)
        long long total_ways = (k * k * (k * k - 1)) / 2;
 
        // Total ways that two knights can attack each other
        long long attacking_ways = 4 * (k - 1) * (k - 2);
 
        // Safe placements = Total ways - Attacking ways
        cout << total_ways - attacking_ways << "\n";
    }
 
    return 0;
}