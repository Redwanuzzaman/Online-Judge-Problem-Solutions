#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
int main()
{
    ull test;
    ull arr[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    ull n, i;
    cin >> test;
    while(test--)
    {
        ull mul = 1;
        cin >> n;
        for(i = 0; i < 16; i++)
        {
            mul *= arr[i];
            if(mul > n) break;
        }
        cout << i << endl;
    }
}
