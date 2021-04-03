#include <bits/stdc++.h>
using namespace std;

int main()
{
    double cheerios, friends, tmp;
    cin >> cheerios >> friends;
    tmp = friends;
    while(cheerios)
    {
        cheerios -= int(cheerios/2 + 0.5);
        friends--;
    }
    if(friends < 0)
    {
        friends = 0;
    }
    cout << int(tmp - friends) << endl;
}
