#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cell, dest;
    cin >> cell >> dest;
    int arr[cell+2];
    for(int i = 1; i < cell; i++) cin >> arr[i];
    for(int i = 1; i <= cell; ){
        i += arr[i];
        if(i == dest) return cout << "YES" << endl, 0;
    }
    cout << "NO" << endl;
}
