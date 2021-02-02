#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    long t, a, b, cfa = 0, cfb = 0, max = 0, lead, w;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cfa += a;
        cfb += b;
        lead = (cfa-cfb) > 0 ? (cfa - cfb) : -1*(cfa-cfb);
        if(max < lead)
        {
            max = lead;
            w = cfa > cfb ? 1 : 2;
        }
    }
    cout << w << " " << max;
    return 0;
}