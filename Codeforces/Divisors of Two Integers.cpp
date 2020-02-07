#include <bits/stdc++.h>
using namespace std;

int check[20000];
int main()
{
    int n, x, y = 1;
    cin >> n;
    int arr[n+1];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        check[arr[i]]++;
    }
    sort(arr, arr+n);
    x = arr[n-1];
    set<int> st;
    int r = sqrt(x);
    for (int i = 1; i <= r; i++)
    {
        if(x % i == 0)
        {
            st.insert(i);
            if (x / i != i)
            {
                st.insert(x / i);
            }
        }
    }
    for(int i = 0; i < n; i++) if(check[arr[i]] == 2) y = arr[i];
    for(int i=0; i<n; i++)
    {
        if (st.count(arr[i]) == 0) y = max(arr[i], y);
    }

    cout << x << " " << y << endl;
}
