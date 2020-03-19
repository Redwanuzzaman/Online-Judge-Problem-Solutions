//  Litsey o`quvchilar uchun, problem: (C) Art Museum

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, res = 0;
    int arr[100005] = {0};
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        for(int i = a; i < b; i++) arr[i]++;
    }
    for(int i = 0; i < 24; i++) res = max(res, arr[i]);
    cout << res << endl;
    return 0;
}
