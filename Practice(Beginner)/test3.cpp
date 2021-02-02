#include<iostream>
#include<math.h>
using namespace std;
#define int long
signed main()
{
    int t, n, k, slow = 0, atempt = 0, bot = 0;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] >= 0 && arr[i] <= k)
                atempt++;
            if(arr[i] > k)
                slow = 1;
            if(arr[i] >=0 && arr[i] <=1)
                bot++;
        }
        if(atempt < ceil(n/2))
            cout << "Rejected";
        else if(slow)
            cout << "Too Slow";
        else if(bot == n)
            cout << "Bot";
        else
            cout << "Accepted";
        cout << endl;
    }
    return 0;
}