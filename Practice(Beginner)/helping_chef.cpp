#include<iostream>
using namespace std;
int main()
{
    long t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n < 10)
            cout << "Thanks for helping Chef!";
        else 
            cout << "-1";
        cout << endl;
    }
    return 0;
}