#include<iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a>b)
            cout << ">";
        else if(b>a)
            cout << "<";
        else 
            cout << "=";
        cout << endl;
    }
    return 0;
}