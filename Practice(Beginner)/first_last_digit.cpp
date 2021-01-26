#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int last = n%10;
        while(n >= 10)
            n /= 10;
        cout << last+n << endl;
    }
    return 0;
}