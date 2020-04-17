#include <bits/stdc++.h>
using namespace std;

bool leapYear(int n)
{
    if(n % 400 == 0) return true;
    else if(n % 4 == 0 and (n % 100 != 0)) return true;
    return false;
}

int main()
{
    int year;
    cin >> year;
    if(year == 1918) cout << "26.09.1918\n";
    else if(year > 1918)
    {
        if(leapYear(year)) cout << "12.09." << year << endl;
        else cout << "13.09." << year << endl;
    }
    else
    {
        if(year % 4 == 0) cout << "12.09." << year << endl;
        else cout << "13.09." << year << endl;
    }
}
