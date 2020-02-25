#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    int arr[n+1];
    priority_queue <int> pq;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < k; i++)
    {
        cin >> x;
        pq.push(x);
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = pq.top();
            pq.pop();
        }
    }
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1]) return cout << "Yes" << endl, 0;
    }
    cout << "No" << endl;
}
