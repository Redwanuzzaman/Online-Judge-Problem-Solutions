#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, newn, temp;
    cin >> n;
    int arr[n+1] = {0};
    newn = n;
    for(int i = 0; i < newn; i++)
    {
        cin >> temp;
        arr[temp] = 1;;
        while(arr[n]){
            cout << n << " ";
            n--;
        }
        cout << endl;
    }
}
