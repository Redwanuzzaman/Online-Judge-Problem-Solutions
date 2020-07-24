#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, p, y;
    double r1, r2;
    cin >> t;
    while(t--)
    {
        cin >> p >> y >> r1 >> r2;
        double r1rate = pow((1.0 + (r2/100.0)), y);
        double compound = (p * r1rate) - p;
        double r2rate = (p * r1) / 100.0;
        double simple = r2rate * y;
        //cout << compound << " " << simple << endl;
        if(abs(compound - simple) < 1e-9)
        {
            cout << "Confused huh!" << endl;
        }
        else if(simple < compound)
        {
            cout << "Bank 1" << endl;
        }
        else if(compound < simple)
        {
            cout << "Bank 2" << endl;
        }
    }
    return 0;
}
