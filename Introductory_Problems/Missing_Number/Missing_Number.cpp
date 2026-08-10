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
    cin>>n;
    vector<int>v(n-1);
    for(int i=0;i<n-1;i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int ans=v[0];
    for(int i=0;i<n-2   ;i++) {
        if (v[i]+1!=v[i+1]) {
             ans=v[i]+1;
            break;
        }
    }
    cout<<ans<<endl;
}