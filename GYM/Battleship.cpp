#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[12][12] = {0};
    int n, d, l, r, c, flag = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> d >> l >> r >> c;
        if(d == 0)
        {
            if(c + l - 1 > 10)
            {
                flag = 1;
            }
            else
            {
                for(int j = c; j <= c + l - 1; j++)
                {
                    if(arr[r][j] == 0)
                    {
                        arr[r][j] = 1;
                    }
                    else
                    {
                        flag = 1;
                    }
                }
            }
        }
        else
        {
            if(r + l - 1 > 10)
            {
                flag = 1;
            }
            else
            {
                for(int j = r; j <= r + l - 1; j++)
                {
                    if(arr[j][c] == 0)
                    {
                        arr[j][c] = 1;
                    }
                    else
                    {
                        flag = 1;
                    }
                }
            }
        }
    }
    if(flag)
    {
        cout << "N" << endl;
    }
    else
    {
        cout << "Y" << endl;
    }
}
