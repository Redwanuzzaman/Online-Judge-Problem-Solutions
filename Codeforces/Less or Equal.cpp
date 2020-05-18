#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, k;
    cin >> num >> k;
    int arr[num+1];
    arr[0] = 1;
    for(int i = 1; i <= num; i++) cin >> arr[i];
    sort(arr, arr+num+1);
    if(arr[k] == arr[k+1]) cout << "-1" << endl;
    else cout << arr[k] << endl;
}
