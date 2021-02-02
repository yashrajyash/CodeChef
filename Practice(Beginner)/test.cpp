#include<iostream>
using namespace std;
#define int long long
signed main()
{
    int a, b, c, test;
    cin >> test;
    while(test--)
    {
        cin >> a >> b >> c;
        if(a+b == c || a+c == b || b+c == a)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}