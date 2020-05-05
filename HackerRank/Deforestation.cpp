#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, pos = 0, mns = 0, zro = 0;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) pos++;
        else if(arr[i] == 0) zro++;
        else mns++;
    }
    cout << fixed << setprecision(6) << ((double) pos/n) << endl << ((double) mns/n) << endl << ((double) zro/n);
}
