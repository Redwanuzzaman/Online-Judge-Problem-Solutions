#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= 1000; i++)
    {
        sum += (i*(i+1))/2;
        if(sum > n) return cout << i-1 << endl, 0;
    }
}
