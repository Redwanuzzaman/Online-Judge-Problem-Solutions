#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    set <int> s;
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
        s.insert(arr[i]);
    }
    cout << 4-s.size() << endl;
}
