#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tuna = 0, c1 = 1, c2;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1]) c1++;
        else
        {
            c2 = c1;
            c1 = 1;
        }
        tuna = max(tuna, 2 * min(c1, c2));
    }
    cout << tuna << endl;
}
