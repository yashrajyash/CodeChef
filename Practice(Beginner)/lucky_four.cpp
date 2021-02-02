#include<iostream>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while(t--)
    {
        string num;
        long count = 0;
        cin >> num;
        for(int i=0; i<num.length(); i++)
        {
            if(num.at(i) == '4')
                count++;
        }
        cout << count <<endl;
    }
    return 0;
}