#include<iostream>
using namespace std;
int main()
{
    long t, a, b ,min, max;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        min = (a>b) ? a:b;
        max = a+b;
        cout << min << " " << max << endl;
    }
    return 0;
}