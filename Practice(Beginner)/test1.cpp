#include<iostream>
using namespace std;
#define int long long
signed main()
{
    int t, n, count;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        count = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if((arr[i]-arr[i+1]) % 2 != 0)
                count++;
        }
        if(count != 0)
            cout << count/2;
        else
            cout << count;
        cout << endl;
    }
    return 0;
}