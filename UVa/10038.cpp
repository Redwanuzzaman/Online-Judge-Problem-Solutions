#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int arr[n+1], arr2[n], i;
        for(i = 0; i < n; i++) cin >> arr[i];
        for(i = 1; i < n-1; i++)
        {
            arr2[i] = abs(arr[i]-arr[i-1]);
        }
        sort(arr2, arr2+i);
        int f = 0;
        for(i = 0; i < n-1; i++)
        {
            if(arr2[i] == arr2[i+1])
            {
                f = 1;
                break;
            }
        }
        if(f == 1) cout << "Not jolly" << endl;
        else cout << "Jolly" << endl;
    }
}
