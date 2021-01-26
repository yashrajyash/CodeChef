#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    for(ll j=0; j<n; j++)
        cout << arr[j] << endl;
    return 0;
}