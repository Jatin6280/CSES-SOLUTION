/*
 * Problem Name: Distinct_Numbers
 * Language: C++
 * Category: Sorting_and_Searching
 * Date: 2026-08-25
 */

  #include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    if(n==0){
        cout<<0;
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int count =0;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            count++;
        }
    }
    cout<<count+1;
}
    