#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n+2];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    stack <int> stk;

    for(int i = 0; i < n; i++)
    {
        while(!stk.empty() && (arr[i] > stk.top()) && (arr[i] <= stk.top() + k)) stk.pop();
        stk.push(arr[i]);
    }
    cout << stk.size() << endl;
}
