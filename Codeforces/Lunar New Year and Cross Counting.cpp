#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, Count = 0, i, j;
    cin >> n;
    string a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n-1; i++)
    {
        for (j = 1; j < n-1; j++)
        {
            if (a[i][j] == 'X')
            {
                if ((a[i-1][j-1]=='X') && (a[i-1][j+1]=='X') && (a[i+1][j+1]=='X') && (a[i+1][j-1]=='X'))
                    Count += 1;
            }
        }
    }
    cout << Count << endl;
}
