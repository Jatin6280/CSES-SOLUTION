/*
 * Problem Name: Creating_Strings
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-21
 */

#include <iostream>
#include <algorithm>
using namespace std;
 
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
 
int main() {
    string s;
    cin >> s;
 
    int nl = s.length();
 
    int freq[26] = {0};
 
    for (char i : s) {
        freq[i - 'a']++;
    }
 
    int fn = factorial(nl);
 
    int cn = 1;
 
    for (int i = 0; i < 26; i++) {
        cn *= factorial(freq[i]);
    }
 
    cout << fn / cn<<endl;
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }
    while(
        next_permutation(s.begin(), s.end())
    );
    return 0;
}