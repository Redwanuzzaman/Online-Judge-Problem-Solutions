#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, x;
    cin >> n;
    int arr[102] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        while(r--)
        {
            cin >> x;
            arr[x]++;
        }
    }
    for (int i = 1; i < 101; ++i)
    {
        if(arr[i] == n) cout << i << " ";
    }

    cout<<endl;
}
