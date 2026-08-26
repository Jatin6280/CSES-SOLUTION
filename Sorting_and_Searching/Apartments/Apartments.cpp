/*
 * Problem Name: Apartments
 * Language: C++
 * Category: Sorting_and_Searching
 * Date: 2026-08-26
 */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<int> applicants(n);
    vector<int> apartments(m);
 
    for (int i = 0; i < n; i++)
    {
        cin >> applicants[i];
    }
 
    for (int i = 0; i < m; i++)
    {
        cin >> apartments[i];
    }
 
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
 
    int i = 0; // applicant pointer
    int j = 0; // apartment pointer
    int ans = 0;
 
    while (i < n && j < m)
    {
 
        if (apartments[j] < applicants[i] - k)
        {
            // Apartment is too small
            j++;
        }
        else if (apartments[j] > applicants[i] + k)
        {
            // Apartment is too large
            i++;
        }
        else
        {
            // Apartment matches applicant
            ans++;
            i++;
            j++;
        }
    }
 
    cout << ans << '\n';
 
    return 0;
}   