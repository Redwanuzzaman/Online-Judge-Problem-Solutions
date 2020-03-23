#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, mark;
    cin >> t;
    int arr[t+5];
    for(int j = 0; j < t; j++)
    {
        int sum = 0;
        for(int i = 0; i < 4; i++)
        {
            cin >> mark;
            sum += mark;
        }
        arr[j] = sum;
    }
    int thomas = arr[0];
    sort(arr,arr+t);
    for(int i = t-1; i >= 0; i--)
        if(arr[i] == thomas) return cout << t-i << endl, 0;

}
