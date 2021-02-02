#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long t, num;
    cin >> t;
    while(t--)
    {
        cin >> num;
        cout << int(sqrt(num)) << endl;
    }
    return 0;
}