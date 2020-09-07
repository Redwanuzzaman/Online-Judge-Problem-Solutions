#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, n, cs = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        char ans[n+1][n+1];
        string incoming, outgoing;
        cin >> incoming >> outgoing;
        bool peer;
        for(int i = 0; i < n; i++)
        {
            peer = true;
            for(int j = i; j < n-1; j++)
            {
                if(i == j)
                {
                    ans[i][j] = 'Y';
                }
                if(outgoing[j] == 'Y' and peer)
                {
                    if(incoming[j+1] == 'Y')
                    {
                        ans[i][j+1] = 'Y';
                    }
                    else
                    {
                        peer = false;
                        ans[i][j+1] = 'N';
                    }
                }
                else
                {
                    peer = false;
                    ans[i][j+1] = 'N';
                }
            }
            peer = true;
            for(int j = i; j > 0; j--)
            {
                if(i == j)
                {
                    ans[i][j] = 'Y';
                }
                if(outgoing[j] == 'Y' and peer)
                {
                    if(incoming[j-1] == 'Y')
                    {
                        ans[i][j-1] = 'Y';
                    }
                    else
                    {
                        ans[i][j-1] = 'N';
                        peer = false;
                    }
                }
                else
                {
                    ans[i][j-1] = 'N';
                    peer = false;
                }
            }
        }
        printf("Case #%d:\n", cs++);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
}
