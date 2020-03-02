#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+2], arr2[n+2];
    arr[0] = 0, arr2[0] = 0;
    vector <int> v;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i] - arr[i-1];
    }
    for(int i = 1; i <= n; i++)
    {
        bool chk = true;
        for(int j = i+1; j <= n; j++)
        {
            if(arr2[j] != arr2[(j-1) % i+1])
            {
                chk = false;
                break;
            }
        }
        if(chk) v.push_back(i);
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}
