#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num, k;
    cin >> num >> k;
    while(k--){
        if(num % 10 == 0) num /= 10;
        else num--;
    }
    cout << num << endl;
}
