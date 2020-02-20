#include <bits/stdc++.h>
using namespace std;

int arr[10002], arr2[10002];
int main()
{
    int n, m, z, cnt = 0;
    cin >> n >> m >> z;

    for(int i = m; i <= z; i += m) arr2[i] = 1;
    for(int i = n; i <= z; i += n)
    {
        if(arr2[i] == 1) cnt++;
    }
    cout << cnt << endl;
}
