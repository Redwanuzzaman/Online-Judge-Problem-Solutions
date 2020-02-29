#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, j = 1;
    cin >> test;
    while(test--)
    {
        int m, n, f=0, sum=0, temp = -1;
        cin >> m >> n;
        int arr[n+1];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if(i > 0 && arr[i] == temp + 1) f = 1;
            temp=arr[i];
        }
        cout << "Case " << j++ << ": Thank You BACS!!!";
        if(sum >= m) cout << " Thik ache. ";
        else cout <<" Bojjat dokandar!! ";
        if(f == 1) cout << "Yes";
        else cout << "No";
        if(j > 1) cout << endl;
    }
}
