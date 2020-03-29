#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[101] = {0};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[k]++;
    }
    sort(arr,arr+101);

    cout << arr[100] << endl;
}
