#include <bits/stdc++.h>
using namespace std;

int arr[10] = {1};
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            arr[j] += arr[j-1];
        }
    }
    cout << arr[n-1] << endl;
}
