#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test, n;
    cin >> test;

    while(test--)
    {
        int arr[10] = {0};
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            int tmp = i;
            while(tmp)
            {
                int mod = tmp % 10;
                tmp /= 10;
                arr[mod]++;
            }
        }
        for(int i = 0; i < 10; i++)
        {
            if(i == 9) cout << arr[9] << endl;
            else printf("%d ", arr[i]);
        }
    }
}
