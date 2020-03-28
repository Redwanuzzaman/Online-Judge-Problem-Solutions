#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+2];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1) return cout << "HARD" << endl, 0;
    }
    cout << "EASY" << endl;
}
