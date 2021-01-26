#include<iostream>
using namespace std; 
long long fact(long long n)
{
    long long f = 1, i;
    for(i=1; i<=n; i++)
        f *= i;
    return f;
}
int main()
{
    long long t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << fact(n) << endl;
    }
    return 0;
}