#include<bits/stdc++.h>
using namespace std;
int arr[4];
int main()
{
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr,arr+3);
    if(((a+b) > c) && ((b+c) > a) && ((a+c) > b))    cout << cnt << endl;
    else
    {
        cnt=(arr[2]-(arr[0]+arr[1]))+1;
        cout << cnt << endl;
    }
}
